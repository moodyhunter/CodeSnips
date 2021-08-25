struct ElementInfo
{
    enum ElementType
    {
        Bool = QMetaType::Bool,
        Integer = QMetaType::LongLong,
        Double = QMetaType::Double,
        String = QMetaType::QString,
        Array = QMetaType::QVariantList,
        Object = QMetaType::QVariantMap,
    };

    QString key;
    QString name;
    ElementType type;
    QList<ElementInfo> objectElements;
    ElementType arrayElementType;

    template<ElementType t, typename = typename std::enable_if_t<t == Array, void>>
    static inline ElementInfo Create(const QString &k, const QString &name, ElementType arrayType, const QList<ElementInfo> &children = {})
    {
        ElementInfo info;
        info.type = t;
        info.key = k;
        info.name = name;
        info.arrayElementType = arrayType;
        info.objectElements = children;
        return info;
    }

    template<ElementType t, typename = typename std::enable_if_t<t == Object, void>>
    static inline ElementInfo Create(const QString &k, const QString &name, const QList<ElementInfo> &children)
    {
        ElementInfo info;
        info.type = t;
        info.key = k;
        info.name = name;
        info.objectElements = children;
        return info;
    }

    template<ElementType t, typename = typename std::enable_if_t<t != Object && t != Array, void>>
    static inline ElementInfo Create(const QString &k, const QString &name)
    {
        ElementInfo info;
        info.type = t;
        info.key = k;
        info.name = name;
        return info;
    }

    explicit ElementInfo(){};
};
