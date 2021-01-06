#include <iostream>
class Base
{
public:
    virtual void f() const { std::cout << "Base::f()" << std::endl; }
    virtual ~Base() { }
};
class Der : public Base
{
public:
    virtual void f() const { std::cout << "Der::f()" << std::endl; }
    virtual ~Der() { }
};