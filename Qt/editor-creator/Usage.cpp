#include "DynamicEditorCreator.hpp"
#include "DynamicEditorCreator-Impl.hpp"

#include <QApplication>
#include <QJsonDocument>
#include <iostream>

QList<ElementInfo> GroupDetails{
    ElementInfo::Create<ElementInfo::String>("nodeOwner", "Node Owner"),
    ElementInfo::Create<ElementInfo::String>("groupOwner", "Group Owner"),
};

QList<ElementInfo> GroupInfo{
    ElementInfo::Create<ElementInfo::String>("tag", "Tag"),
    ElementInfo::Create<ElementInfo::Array>("group", "Group", ElementInfo::Object, GroupDetails),
};

QList<ElementInfo> infos{
    ElementInfo::Create<ElementInfo::Bool>("some_boolean", "A Boolean"),
    ElementInfo::Create<ElementInfo::Integer>("some_integer", "An Integer"),
    ElementInfo::Create<ElementInfo::Double>("some_double", "A Double"),
    ElementInfo::Create<ElementInfo::String>("some_string", "A String"),
    ElementInfo::Create<ElementInfo::Array>("some_array", "An Array", ElementInfo::String),
    ElementInfo::Create<ElementInfo::Object>("some_object", "An Object", GroupInfo),
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StructuredEditor c{ infos };
    c.show();
    auto result = a.exec();
    std::cout << QJsonDocument::fromVariant(c.GetContent()).toJson().toStdString() << std::endl;
    return result;
}
