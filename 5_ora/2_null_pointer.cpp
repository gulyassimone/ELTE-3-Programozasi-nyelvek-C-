#include <iostream>
#include <cstring>
int str_len( const char* p )
{
    if ( 0 == p )
    {
        return -1;
    }
    const char* q = p;
    while ( '\0' != *q )
    {
        ++q;
    }
    return q-p;
}
int main()
{
    std::cout << str_len( "Hello" )
              << std::endl;
    std::cout << str_len( 0 )
              << std::endl;
    const char * np = 0;
    if ( np != 0 )
    {
        std::cout << std::strlen( np )
                  << std::endl;
    }
}