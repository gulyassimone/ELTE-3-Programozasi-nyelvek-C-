#include <iostream>
class X
{
};

void f()
{
    std::cout << sizeof( X ) << std::endl;
    X a;
    X b;
    X c = b;
    X d( b );
    b = a; // b.operator=( a );
    X* p = &a;
    X* q = &b;
    X* r = &c;
    std::cout << p << std::endl
              << q << std::endl
              << r << std::endl;
}

int main()
{
    f();
}