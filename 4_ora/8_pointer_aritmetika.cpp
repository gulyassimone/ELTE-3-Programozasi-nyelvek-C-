#include <iostream>
int main()
{
    std::cout << "Hello" + 3 << std::endl;
    int a[] = { 1, 2, 4, 7, 5 };
    std::cout << *( 2 + a ) << std::endl;
    std::cout << 2[ a ] << std::endl;
    std::cout << a[ 2 ] << std::endl;
}