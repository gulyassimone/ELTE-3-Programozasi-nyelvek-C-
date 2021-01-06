#include <iostream>
#include "complex.h"

int main()
{
    complex c( 12.34, 56.78 );
    complex d = c;
    std::cout << c.abs() << std::endl << d.abs() << std::endl;
    c = d; // c.operator=( d );
    d.set_re( 44.55 );
    std::cout << c.abs() << std::endl;
    std::cout << d.abs() << std::endl;
}