#include <iostream>
void print( int* a , int n )
{
    for( int i = 0; i < n; ++i )
    {
        std::cout << *( a++ ) << ' ';
    }
    std::endl( std::cout );
}
void f( int i )
{
    int* p = new int;
    *p  = i;
    std::cout << *p << std::endl;
    delete p;
    p = new int[ i ];
    for( int s = 0; s < i; ++s )
    {
        p[ s ] = s;
    }
    print( p, i );
    delete [] p;
}
int main()
{
    f( 9 );
}