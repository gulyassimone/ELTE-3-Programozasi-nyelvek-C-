#include <iostream>
void print( int* a, int n )
{
    for( int i = 0; i < n; ++i )
    {
        std::cout << a[ i ] << ' ';
    }
    std::endl( std::cout );
}
void inc( int *a, int n )
{
    for( int i = 0; i < n; ++i )
    {
        ++a[ i ];
    }
}
int main()
{
    int s[] = { 7, 2, 8, 9, 3 };
    inc( s, sizeof( s ) / sizeof( s[ 0 ] ) );
    print( s, sizeof( s ) / sizeof( s[ 0 ] ) );
}