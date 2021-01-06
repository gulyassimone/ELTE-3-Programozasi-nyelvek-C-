#include <iostream>
class Foo
{
    int i;
public:
    Foo( int a ) { i = a; }
    void print() const
    {
        std::cout << i << std::endl;
    }
};
void f()
{
    Foo e( 2 );
    Foo f( 7 );
    Foo g( 4 );
    Foo h = f;
    f = g;
    e.operator=( g );
    e.print();
    f.print();
    g.print();
    h.print();
    std::cout << &f << std::endl
              << &h << std::endl;
}

int main()
{
    f();
}