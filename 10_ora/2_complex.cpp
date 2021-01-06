#include <iostream>
#include "complex.h"

int main()
{
    complex c( 12.34, 56.78 );
    std::cout << &c << std::endl;
    std::cout << c.abs() << std::endl;
}