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
    Foo f( 7 );
    Foo g( 4 );
    f.print();
    g.print();
}

int main()
{
    f();
}