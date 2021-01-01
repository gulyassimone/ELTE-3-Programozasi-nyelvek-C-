#include <iostream>
inline double fahr2cels( double x )
{
    return 5. / 9 *( x -32 );
}
int main()
{
    const int lower = -40;
    const int upper = 100;
    const int step  =  10;
    for( int i = lower; i <= upper; i += step )
    {
        std::cout << i << " Fahr\t"
                  << fahr2cels( i )
                  << " Cels" << std::endl;
    }
}