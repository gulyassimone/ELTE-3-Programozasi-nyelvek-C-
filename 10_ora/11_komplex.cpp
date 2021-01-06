#include "complex.h"
#include "complex_impl.h"
complex::complex( double r, double i )
{
    p = new complex_impl( r, i );
}
complex::complex( const complex& rhs )
{
    p = new complex_impl( *rhs.p );
}
double complex::abs() const
{
    return p->abs();
}
void complex::set_re( double d )
{
    p->set_re( d );
}
double complex::get_re() const
{
    return p->get_re();
}
complex& complex::operator=( const complex& rhs )
{
    *p = *rhs.p;
    return *this;
}