#include <iostream>
bool f()
{
    return false;
}
int main()
{
    std::cout << f << std::endl;
    if ( f )
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
}