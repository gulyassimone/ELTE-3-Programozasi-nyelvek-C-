#include <iostream>
class X
{
public:
    virtual ~X() { }
};
class Y: public X
{
public:
    void f() { std::cout << "Y::f()" << std::endl; }
    virtual ~Y() { }
};
int main()
{
    X* p = new Y();
    if ( Y* q = dynamic_cast<Y*>( p ) )
    {
        q->f();
    }
    delete p;
}