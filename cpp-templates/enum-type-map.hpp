template<typename enum_t>
struct maps
{
    template<enum_t ikey, typename tvalue>
    struct kvp
    {
        static constexpr enum_t key = ikey;
        using value = tvalue;
    };

    template<typename...>
    struct map;

    template<enum_t k, typename tvalue, typename... kvps>
    struct map<kvp<k, tvalue>, kvps...>
    {
      private:
        template<enum_t, bool>
        struct value_impl
        {
            using val = tvalue;
        };

        template<enum_t kk>
        struct value_impl<kk, false>
        {
            static_assert(sizeof...(kvps) > 0, "No such key");
            using val = typename map<kvps...>::template value<kk>;
        };

      public:
        template<enum_t kk>
        using value = typename value_impl<kk, kk == k>::val;
    };
};

typedef maps<Qt::AnchorPoint> apmap;
typedef apmap::map<apmap::kvp<Qt::AnchorBottom, int>> x;

void xx()
{
    x::value<Qt::AnchorBottom> xt;
}
