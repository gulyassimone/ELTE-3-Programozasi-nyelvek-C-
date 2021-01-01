#include <iostream>
int main()
{
    int s[] = { 7, 2, 8, 9, 3 };
    for( int i = 0; i < sizeof( s ) / sizeof( s[ 0 ] ); ++i )
    {
        std::cout << s[ i ] << ' ';
    }
    std::endl( std::cout );
}