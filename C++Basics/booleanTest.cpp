#include <iostream>

int main()
{
    bool a = true, b = false;
    bool c = 1, d = 0;

    std::cout << c << " " << d;
    std::swap(a, b);
    std::cout << "\na = " << a << "b = " << b;

    return 0;
}
