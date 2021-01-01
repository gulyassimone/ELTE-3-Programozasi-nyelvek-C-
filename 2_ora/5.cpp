#include <iostream>
int main()
{
    int x = 5;
    int *p = &x;
    std::cout << p << ' ' << *p << std::endl;
    *p = 8;
    std::cout << x << std::endl;
    const int y = 6;
    int *q = &y;
    *q = 4;
}