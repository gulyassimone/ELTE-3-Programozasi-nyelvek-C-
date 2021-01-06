#include <iostream>
void inc( int i )
{
    ++i;
}
int main()
{
    int s = 4;
    inc( s );
    std::cout << s << std::endl;
}