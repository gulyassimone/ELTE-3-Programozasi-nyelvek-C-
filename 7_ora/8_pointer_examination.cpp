#include <iostream>
void inc( int* p  )
{
    if ( p )
    {
        ++(*p);
    }
}
int main()
{
    int s = 4;
    inc( &s );
    inc( 0 );
    std::cout << s << std::endl;
}