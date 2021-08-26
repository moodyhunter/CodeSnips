from typing import cast
import xml.etree.ElementTree as ET


class type_lookup_result:
    found: bool
    complete: bool
    typename: str
    requiredtype: str

    def __init__(self, _found, _complete, _typename, _fulltypename) -> None:
        self.found = _found
        self.complete = _complete
        if _complete:
            assert _found
        self.typename = _typename
        self.requiredtype = _fulltypename
        pass

    def __eq__(self, oo: object) -> bool:
        if not isinstance(oo, type_lookup_result):
            return False
        o = cast(type_lookup_result, oo)
        return self.found == o.found and self.complete == o.complete and self.typename == o.typename and self.requiredtype == o.requiredtype

    def __hash__(self) -> int:
        return hash(self.typename)


def lookupType(t: str, useForwardDeclarations: bool = False) -> type_lookup_result:
    if t in EDM_TYPE_MAP.values():
        return type_lookup_result(True, True, t, t)

    if useForwardDeclarations and t in FORWARD_DECLARATIONS:
        return type_lookup_result(True, False, t, t)

    if t in ALL_TYPES:
        if useForwardDeclarations:
            if ALL_TYPES[t].processed:
                return type_lookup_result(True, True, t, t)
        else:
            return type_lookup_result(True, ALL_TYPES[t].processed, t, t)

    if t.startswith("QList<") and t.endswith(">"):
        result = lookupType(t[6:-1], True)
        result.typename = t[6:-1]
        result.requiredtype = t
        return result
    if t.startswith("std::unique_ptr<") and t.endswith(">"):
        result = lookupType(t[16:-1], True)
        result.typename = t[16:-1]
        result.requiredtype = t
        return result

    return type_lookup_result(False, False, t, t)


class type_info:
    name = ""
    deps = []
    content = ""
    processed = False

    def __init__(self):
        self.deps = []
        return

    def unresolvedDependencies(self, useForwardDeclarations: bool = False) -> list[type_lookup_result]:
        result = []
        for dep in self.deps:
            if "microsoft::graph::roleAssignment" == dep and not useForwardDeclarations:
                y = 10
            l = lookupType(dep, useForwardDeclarations)
            if not ((useForwardDeclarations and l.found) or (not useForwardDeclarations and l.complete)):
                if not l.typename.endswith("::" + self.name):
                    result.append(l)
        result = list(dict.fromkeys(result))
        return result

    def fullyResolved(self):
        return len(self.unresolvedDependencies()) == 0

    def appendPrintStr(self, p: str):
        assert not self.processed
        self.content += p + "\n"


PREFIX = '{http://docs.oasis-open.org/odata/ns/edm}'
IDENT_LEVEL = 0
FORWARD_DECLARATIONS: list[str] = []
ALL_TYPES: dict[str, type_info] = {}
NAMESPACE_ALIASES: dict[str, str] = {}
EDM_TYPE_MAP = {
    "Edm.String": "QString",
    "Edm.Int32": "int",
    "Edm.DateTimeOffset": "QDateTime",
    "Edm.Single": "float",
    "Edm.Double": "double",
    "Edm.Decimal": "double",
    "Edm.Int64": "long long",
    "Edm.Stream": "QByteArray",
    "Edm.Binary": "QByteArray",
    "Edm.TimeOfDay": "QTime",
    "Edm.Date": "QDate",
    "Edm.Byte": "std::byte",
    "Edm.Int16": "short",
    "Edm.Short": "std::short",
    "Edm.Guid": "QUuid",
    "Edm.Duration": "std::chrono::system_clock::duration",
    "Edm.Boolean": "bool"
}

TYPE_PRINT_ORDER: list[str] = []


def replaceColons(ns: str):
    return ns.replace('.', '::')


def idented(str):
    return IDENT_LEVEL * "    " + str


def pushIdent():
    global IDENT_LEVEL
    IDENT_LEVEL = IDENT_LEVEL + 1


def popIdent():
    global IDENT_LEVEL
    IDENT_LEVEL = IDENT_LEVEL - 1


def filterKeywords(s: str):
    kws = ["new",     "delete", "class",    "struct", "enum", "namespace",  "export", "default",
           "auto",    "double", "int",      "float",  "long", "operator", "template",
           "case",    "bool",   "and",      "or",     "not",
           "private", "public", "protected", "friend"]
    if s in kws:
        return "_" + s
    for kw in kws:
        if s.endswith("." + kw):
            return s[:s.rindex(".")+1] + "_" + s[s.rindex(".")+1:]
    return s


def edmTypeToCpp(t: str):
    if t in EDM_TYPE_MAP:
        return EDM_TYPE_MAP[t]
    if t.startswith("Collection(") and t.endswith(")"):
        return "QList<" + replaceColons(edmTypeToCpp(filterKeywords(t[11:-1]))) + ">"
    for alias in NAMESPACE_ALIASES:
        if t.startswith(alias + "."):
            t = t.replace(alias + ".", NAMESPACE_ALIASES[alias] + ".")
    return replaceColons(t)


def parseNamespace(node: ET.Element):
    ns = replaceColons(node.attrib["Namespace"])
    nsalias = "" if node.attrib.get("Alias") == None else replaceColons(node.attrib["Alias"])
    nstypes = []
    if nsalias != "":
        NAMESPACE_ALIASES[nsalias] = ns
    pushIdent()
    for child in node:
        xmlKeyType = child.tag.removeprefix(PREFIX)
        if xmlKeyType == "EnumType":
            displayName = filterKeywords(child.attrib["Name"])
            fullType = ns + "::" + displayName
            ALL_TYPES[fullType] = type_info()
            ALL_TYPES[fullType].name = displayName
            ALL_TYPES[fullType].appendPrintStr(idented("enum class " + displayName + " {"))
            pushIdent()
            for grandchild in child:
                ALL_TYPES[fullType].appendPrintStr(idented(filterKeywords(grandchild.attrib["Name"]) + " = " + grandchild.attrib["Value"] + ","))
            popIdent()
            ALL_TYPES[fullType].appendPrintStr(idented("};"))
            nstypes.append(fullType)
        elif xmlKeyType == "EntityType" or xmlKeyType == "ComplexType":
            displayName = filterKeywords(child.attrib["Name"])
            fullType = ns + "::" + displayName
            ALL_TYPES[fullType] = type_info()
            ALL_TYPES[fullType].name = displayName
            if child.attrib.get("BaseType") is not None:
                basetype = replaceColons(child.attrib["BaseType"])
                baseFullType = edmTypeToCpp(child.attrib["BaseType"])
                ALL_TYPES[fullType].deps.append(baseFullType)
                ALL_TYPES[fullType].appendPrintStr(idented("struct " + displayName + " : " + basetype + " {"))
            else:
                ALL_TYPES[fullType].appendPrintStr(idented("struct " + displayName + " {"))
            pushIdent()
            for grandchild in child:
                if grandchild.tag == PREFIX + "Key":
                    # Special case: <Key/>, don't know how to resolve it.
                    continue
                proptype = edmTypeToCpp(filterKeywords(grandchild.attrib["Type"]))
                if grandchild.tag == PREFIX + "NavigationProperty" and not proptype.startswith("QList<") or proptype == fullType:
                    proptype = "std::unique_ptr<" + proptype + ">"

                ALL_TYPES[fullType].deps.append(proptype)
                ALL_TYPES[fullType].appendPrintStr(idented(proptype + " " + filterKeywords(grandchild.attrib["Name"]) + ";"))
            popIdent()
            ALL_TYPES[fullType].appendPrintStr(idented("};"))
            nstypes.append(fullType)

    popIdent()


def resolve_unresolved_types(allowForwardDeclarations: bool = False) -> list[tuple[str, int]]:
    unresolved = ALL_TYPES.copy()
    oldcount = 0
    while len(unresolved) != oldcount:
        oldcount = len(unresolved)
        for k in ALL_TYPES:
            v = ALL_TYPES[k]
            # Try resolving automatically
            resolved = True
            if v.fullyResolved():
                resolved = True
            else:
                # Fallback to manually resolve
                resolved = len(ALL_TYPES[k].unresolvedDependencies(allowForwardDeclarations)) == 0
            if resolved:
                if k in unresolved:
                    unresolved.pop(k)
                if not v.processed:
                    assert k not in TYPE_PRINT_ORDER
                    v.processed = True
                    TYPE_PRINT_ORDER.append(k)
            else:
                pass

    forward_decl_stat = {}
    for k in unresolved:
        for dep in ALL_TYPES[k].unresolvedDependencies(allowForwardDeclarations):
            if not (dep.requiredtype.startswith("QList<") or dep.requiredtype.startswith("std::unique_ptr<")) and dep.requiredtype.endswith(">"):
                # Only QList<T> and std::unique_ptr<T> can be forward-declared
                continue
            if dep.typename in forward_decl_stat:
                forward_decl_stat[dep.typename] = forward_decl_stat[dep.typename] + 1
            else:
                forward_decl_stat[dep.typename] = 1

    # forward_decl_stat = sorted(forward_decl_stat.items(), key=lambda x: x[1], reverse=True)
    return list(forward_decl_stat.keys())


def parseTreeRecursively(node: ET.Element):
    for child in node:
        _name = child.tag.removeprefix(PREFIX)
        if(_name == "Schema"):
            parseNamespace(child)
        else:
            parseTreeRecursively(child)


def main():
    print("#include <chrono>")
    print("#include <memory>")
    print("#include <QString>")
    print("#include <QByteArray>")
    print("#include <QDateTime>")
    print("#include <QList>")
    print("#include <QUuid>")
    print("")
    print("// clang-format off")

    tree = ET.parse('metadata-beta.xml')
    root = tree.getroot()
    parseTreeRecursively(root)

    FORWARD_DECLARATIONS = resolve_unresolved_types()
    resolve_unresolved_types(allowForwardDeclarations=True)

    lastns = ""
    for fullType in FORWARD_DECLARATIONS:
        ns = fullType[0:fullType.rindex("::")]
        if ns != lastns:
            if lastns != "":
                popIdent()
                print(idented("} // namespace " + lastns))
                print("")
            lastns = ns
            print(idented("namespace " + ns + " {"))
            pushIdent()
        print(idented("struct " + fullType[fullType.rindex("::")+2:] + ";"))
    popIdent()
    print(idented("} // namespace " + lastns))
    print("")

    lastns = ""
    for fullType in TYPE_PRINT_ORDER:
        t = ALL_TYPES.pop(fullType)
        ns = fullType[0:fullType.rindex("::")]
        if ns != lastns:
            if lastns != "":
                popIdent()
                print(idented("} // namespace " + lastns))
                print("")
            lastns = ns
            print(idented("namespace " + ns + " {"))
            pushIdent()
        print(t.content)
    popIdent()
    print(idented("} // namespace " + lastns))
    print("")

    lastns = ""
    for fullType in ALL_TYPES.copy().keys():
        t = ALL_TYPES.pop(fullType)
        ns = fullType[0:fullType.rindex("::")]
        if ns != lastns:
            if lastns != "":
                popIdent()
                print(idented("} // namespace " + lastns))
                print("")
            lastns = ns
            print(idented("namespace " + ns + " {"))
            pushIdent()
        print(t.content)
    popIdent()
    print(idented("} // namespace " + lastns))
    print("")

    print("// clang-format on")
    pass


main()
