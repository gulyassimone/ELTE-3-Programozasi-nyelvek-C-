#include <iostream>
#include <cstring>
void f( const char* p )
{
    std::cout << std::strlen( p ) << std::endl;
}
int str_len( const char* p )
{
    const char* q = p;
    while( '\0' != *q )
    {
        ++q;
    }
    return q - p;
}
int main()
{
    f( "xyz" );
    char str[] = "akarmi";
    std::cout << str << std::endl;
    std::cout << str_len( str ) << std::endl;
    std::cout << str << std::endl;
    std::cout << str + 1 << std::endl;
}