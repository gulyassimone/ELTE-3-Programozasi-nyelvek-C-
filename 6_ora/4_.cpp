#include <string>
#include <iostream>
void f()
{
    char msg[] = "Hello..........";
    std::string str = "Hello";
    for( int i = 0; i < 10; ++i )
    {
        str.push_back( '.' );
    }
    std::cout << str << std::endl;
    std::cout << msg << std::endl;
}
int main()
{
    f();
}