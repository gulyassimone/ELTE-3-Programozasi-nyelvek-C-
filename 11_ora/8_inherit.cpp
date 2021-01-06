#include "base.h"
void g( Base* );
void h( Base );
void hr( Base& );
struct Foo: Base
{
    virtual void f() const { std::cout << "Foo::f()" << std::endl; }
    virtual ~Foo() { }
};
int main()
{
    std::cout << sizeof( Base ) << std::endl;
    Base* q = new Foo();
    g( q );
    h( *q );
    hr( *q );
    delete q;
    Base b;
    b.f();
    Foo foo;
    foo.f();
    q = new Base();
    g( q );
    h( *q );
    hr( *q );
    delete q;
}