#include "complex_impl.h"
#include <cmath>
complex_impl::complex_impl( double r, double i )
{
    re = r;
    im = i;
}
double complex_impl::abs() const
{
    return std::sqrt( re * re + im * im );
}
double complex_impl::get_re() const
{
    return re;
}
void complex_impl::set_re( double d )
{
    re = d;
}