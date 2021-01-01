#include <iostream>
void print( int a[] )
{
    std::cout << "sizeof:" << sizeof( a ) << std::endl;
    for( int i = 0; i < sizeof( a ) / sizeof( a[ 0 ] ); ++i )
    {
        std::cout << a[ i ] << ' ';
    }
    std::endl( std::cout );
}
int main()
{
    int s[] = { 7, 2, 8, 9, 3 };
    for( int i = 0; i < sizeof( s ) / sizeof( s[ 0 ] ); ++i )
    {
        ++s[ i ];
    }
    print( s );
}