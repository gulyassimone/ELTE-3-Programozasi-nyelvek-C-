#include <iostream>
void inc( int* p  )
{
    std::cout << "inc via pointer" << std::endl;
    if ( p )
    {
        ++(*p);
    }
}
void inc( int& r )
{
    std::cout << "inc via reference" << std::endl;
    ++r;
}
int main()
{
    int s = 4;
    inc( &s );
    inc( 0 );
    inc( s );
    std::cout << s << std::endl;
}