
struct GeoIPEntry
{
    uint8_t ip[16];
    uint8_t ipSize;
    uint32_t prefix;
};

typedef QMap<QString, QList<GeoIPEntry>> GeoIPData;

const GeoIPData ReadGeoIP(const QByteArray &data)
{
    GeoIPData ips;
    QList<GeoIPEntry> cidrs;

    picoproto::Message root;
    root.ParseFromBytes((unsigned char *) data.data(), data.size());
    const auto geoips = root.GetMessageArray(1);

    for (const auto &geoip : geoips)
    {
        cidrs.clear();

        for (const auto &cidr : geoip->GetMessageArray(2))
        {
            GeoIPEntry g;
            const auto &[a, b] = cidr->GetBytes(1);
            memcpy(&g.ip, a, b);
            g.ipSize = b;
            g.prefix = cidr->GetUInt64(2);

            cidrs << g;
        }

        ips[QString::fromStdString(geoip->GetString(1))] = cidrs;
    }
    return ips;
}

enum DomainRecordType
{
    // The value is used as is.
    Plain = 0,
    // The value is used as a regular expression.
    Regex = 1,
    // The value is a root domain.
    Domain = 2,
    // The value is a domain.
    Full = 3,
};

struct DomainAttribute
{
    QString attr;
    bool someBool;
    int someInt;
};

struct DomainEntry
{
    DomainRecordType type;
    QString value;
    QList<DomainAttribute> attrs;
};

typedef QMap<QString, QList<DomainEntry>> GeoSiteData;

const GeoSiteData ReadGeosite(const QByteArray &data)
{
    GeoSiteData domains;
    QList<DomainEntry> domainEntryList;
    QList<DomainAttribute> attrList;

    picoproto::Message root;
    root.ParseFromBytes((unsigned char *) data.data(), data.size());
    const auto geosites = root.GetMessageArray(1);

    for (const auto &geosite : geosites)
    {
        domainEntryList.clear();
        const auto records = geosite->GetMessageArray(2);
        domainEntryList.reserve(records.size());
        for (const auto &record : records)
        {
            DomainEntry e;
            e.type = (DomainRecordType) record->GetUInt64(1);
            e.value = QString::fromStdString(record->GetString(2));

            attrList.clear();
            const auto attrlist = record->GetMessageArray(3);
            attrList.reserve(attrlist.size());
            for (const auto &val : attrlist)
            {
                DomainAttribute attr;
                attr.attr = QString::fromStdString(val->GetString(1));
                attrList << attr;
            }

            e.attrs = attrList;
            domainEntryList << e;
        }

        domains[QString::fromStdString(geosite->GetString(1))] = domainEntryList;
    }
    return domains;
}
