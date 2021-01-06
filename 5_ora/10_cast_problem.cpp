#include <iostream>
int main()
{
    char ch = 'a';
    std::cout << static_cast<char>( ch >= 'a' && ch <= 'z' ? ch - 'a' + 'A' : ch );
    std::endl( std::cout );
    std::cout << (char)( ch >= 'a' && ch <= 'z' ? ch - 'a' + 'A' : ch );
    std::endl( std::cout );
    int x = 6;
    std::cout << &x << std::endl;
    long p = reinterpret_cast<long>( &x );
    std::cout << p << std::endl;
    std::cout << (int*)p << std::endl;
    std::cout << reinterpret_cast<const void*>( "kukumuku" )
              << std::endl;
    const int y = 4;
    int* yp = const_cast<int*>( &y );
    *yp = 9;
    std::cout << y << ' ' << *yp << std::endl;
    std::cout << yp << std::endl;
    std::cout << &y << std::endl;
}