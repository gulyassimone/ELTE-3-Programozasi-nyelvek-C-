#ifndef COMPLEX__H
#define COMPLEX__H
class complex_impl;
class complex
{
    complex_impl* p;
public:
    complex( double r = 0.0, double i = 0.0 );
    complex( const complex& );
    double abs() const;
    double get_re() const;
    void set_re( double );
};
#endif