#include <iostream>
int main()
{
    int x = 4;
    int y = 1;
    std::cout << "cout:" << std::cout << std::endl;
    std::cout << "cin: " << std::cin << std::endl;
    int *p = &x;
    std::cout << "x cime: " << p << std::endl;
    // p = 0;
    if ( p )
    {
        std::cout << "Igaz." << std::endl;
    }
    std::cout << (std::cout << x << ',' << y);
    std::endl( std::cout );
    std::cout << ( std::cin >> x >> y );
    std::endl( std::cout );
    std::cout << x << y << std::endl;
}