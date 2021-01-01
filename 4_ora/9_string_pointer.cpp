#include <iostream>
#include <cstring>
void f( const char* p )
{
    std::cout << std::strlen( p ) << std::endl;
}
int str_len( char* p )
{
    char* q = p;
    while( *q != '\0' )
    {
        ++q;
    }
    return q - p;
}
int main()
{
    f( "kukumuku" );
    std::cout << str_len( "kukumukuuu" ) << std::endl;
}