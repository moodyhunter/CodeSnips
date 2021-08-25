#include <iostream>

template<int a, int b = a>
constexpr static void print()
{
    if constexpr (a == 0 && b == 0)
        return;
    else if constexpr (b == 0)
        std::cout << std::endl, print<a - 1, a - 1>();
    else if constexpr (a >= b)
        std::cout << a << "*" << b << "=" << a * b << " ", print<a, b - 1>();
}

int main(int, char *[])
{
    print<9>();
}
