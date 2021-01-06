#ifndef COMPLEX_IMPL__H
#define COMPLEX_IMPL__H
class complex_impl
{
    double re, im;
public:
    complex_impl( double r = 0.0, double i = 0.0 );
    double abs() const;
    void set_re( double );
    double get_re() const;
};
#endif