#pragma once

template<typename tkey, typename tvalue>
struct maps
{
    template<tkey _k, tvalue _v>
    struct kvp
    {
        static constexpr tkey key = _k;
        static constexpr tvalue value = _v;
    };

    template<typename...>
    struct map;

    template<tkey k, tvalue v, typename... kvps>
    struct map<kvp<k, v>, kvps...>
    {
        template<tkey, bool>
        struct value_impl
        {
            static constexpr tvalue val = v;
        };

        template<tkey kk>
        struct value_impl<kk, false>
        {
            static_assert(sizeof...(kvps) > 0, "No such key");
            static constexpr tvalue val = map<kvps...>::template value<kk>;
        };

        template<tkey kk, bool x = kk == k>
        static constexpr tvalue value = value_impl<kk, x>::val;

        template<tvalue, bool>
        struct key_impl
        {
            static constexpr tkey key = k;
        };

        template<tvalue vv>
        struct key_impl<vv, false>
        {
            static_assert(sizeof...(kvps) > 0, "No such value");
            static constexpr tkey key = map<kvps...>::template key<vv>;
        };
        template<tvalue vv>
        static constexpr tkey key = key_impl<vv, vv == v>::key;
    };
};
