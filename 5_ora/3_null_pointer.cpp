#include <iostream>
int main()
{
    int x = 2;
    int* p = &x;
    if ( 0 != p )
    {
        std::cout << x
                  << std::endl;
    }
    p = 0;
    if ( 0 == p )
    {
        std::cout << "Nullpointer"
                  << std::endl;
    }
}