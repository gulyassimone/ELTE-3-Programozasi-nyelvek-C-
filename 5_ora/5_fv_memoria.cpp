#include <iostream>
bool f()
{
    return false;
}
int main()
{
    if ( f )
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
}