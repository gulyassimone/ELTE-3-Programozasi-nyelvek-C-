#include <vector>
#include <iostream>
#include <algorithm>
int main()
{
    std::vector<int> v;
    int i;
    while( std::cin >> i )
    {
        v.push_back( i ); // nem STL algoritmus
    }
    std::sort( v.begin(), v.end() ); // algoritmus
    for( i = 0; i < v.size(); ++i )
    {
        std::cout << v[ i ] << ' ';
    }
    std::endl( std::cout );
}