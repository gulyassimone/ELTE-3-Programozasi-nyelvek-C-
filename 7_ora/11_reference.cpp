#include <iostream>
void f( int );
void g( int& );
void h( const int& );
int main()
{
    int x = 3;
    f( x );
    f( 7 );
    f( x + 1 );
    f( x++ );
    f( ++x );
    g( x );
//  g( 2 );
//  g( x * 4 );
//  g( x++ );
    g( ++x );
    h( x );
    h( 8 );
    h( x + 2 );
    h( x++ );
    h( ++x );
}