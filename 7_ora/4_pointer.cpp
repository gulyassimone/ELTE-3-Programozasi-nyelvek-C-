#include <iostream>
void ptr()
{
    int a = 6;
    int b = 1;
    int* p = &a;
    *p = 2;
    std::cout << p << ':'
              << a << std::endl;
    p = 0;
    if ( p )
    {
        *p = 5;
    }
    p = &b;
    std::cout << p << ':'
              << *p << std::endl;
}
void ref()
{
    int x = 5;
    int y = 7;
    int& r = x;
    std::cout << r << std::endl;
    ++r; // ++x;
    std::cout << x << std::endl;
    x = 11;
    std::cout << r << std::endl;
    r = 3;
    std::cout << x << std::endl;
    const int& cr = r;
    std::cout << cr << std::endl;
    r = y; // x = y;
    std::cout << x << std::endl;
}
int main()
{
    ptr();
    ref();
}