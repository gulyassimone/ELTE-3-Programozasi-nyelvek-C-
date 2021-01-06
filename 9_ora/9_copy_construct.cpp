#include <iostream>
#include <vector>
class X
{
public:
    X() { std::cout << "def. ctor" << std::endl; }
    X( const X& x ) { std::cout << "copy ctor" << std::endl; }
};
void g( X a )
{
    std::cout << &a << std::endl;
}
void f()
{
    X a;
    X b = a;
    X c( a );
    a = b;
    std::vector<X> v( 4 );
    for( int i = 0; i < 12; ++i )
    {
        v.push_back( X() );
    }
    g( b );
}
int main()
{
    f();
}