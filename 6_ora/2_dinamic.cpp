#include <iostream>
#include <cstdlib>
void print( int *a, int n )
{
    for( int i = 0; i < n; ++i )
    {
        std::cout << *( a++ ) << ' ';
    }
    std::endl( std::cout );
}
void f( int i )
{
    int* p = (int*)std::malloc( sizeof( int ) );
    *p = i;
    std::cout << *p << std::endl;
    std::free( p );
    p = (int*)std::malloc( i * sizeof( int ) );
    for( int s = 0; s < i; ++s )
    {
        p[ s ] = s;
    }
    print( p, i );
    free( p );
}
int main()
{
    int v[] = { 7, 2, 1, 8, 5 };
    print( v, sizeof( v ) / sizeof( v[ 0 ] ) );
    f( 9 );
}