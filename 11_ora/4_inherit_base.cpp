#include "base.h"
void g( Base* p );
struct Foo: Base
{
    virtual void f() const { std::cout << "Foo::f()" << std::endl; }
    virtual ~Foo() { std::cout << "~Foo()"; }
};
int main()
{
    Base* q = new Foo();
    g( q );
    delete q;
    q = new Base();
    g( q );
    delete q;
}