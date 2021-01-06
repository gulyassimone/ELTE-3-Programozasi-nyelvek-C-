#include "base.h"
void g( Base* );
void h( Base );
void hr( Base& );
class Foo: public Base
{
private:
    virtual void f() const { std::cout << "Foo::f()" << std::endl; }
public:
    virtual ~Foo() { }
};
int main()
{
    std::cout << sizeof( Base ) << std::endl;
    Base* q = new Foo();
    q->f();
    g( q );
    h( *q );
    hr( *q );
    delete q;
    q = new Base();
    g( q );
    h( *q );
    hr( *q );
    delete q;
}