#include <iostream>
class X
{
public:
    X() { std::cout << "default ctor" << std::endl; }
};

class Y
{
public:
    Y( int i ) { std::cout << "ctor: " << i << std::endl; }
};
void f()
{
    Y y[ 4 ];
    std::cout << sizeof( X ) << std::endl;
    X s[ 4 ];
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