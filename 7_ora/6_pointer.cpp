#include <iostream>
void inc( int* p  )
{
    ++(*p);
}
int main()
{
    int s = 4;
    inc( &s );
    std::cout << s << std::endl;
}