#include "base.h"
void g( Base* p )
{
    p->f();
}
void h( Base b )
{
    b.f();
}
void hr( Base& b )
{
    b.f();
}