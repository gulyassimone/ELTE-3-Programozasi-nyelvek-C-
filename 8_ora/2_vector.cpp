#include <vector>
#include <iostream>
#include <algorithm>
void print( const int& i )
{
    std::cout << i << ' ';
}
int main()
{
    std::vector<int> v;
    int i;
    while( std::cin >> i )
    {
        v.push_back( i ); // nem STL algoritmus
    }
    std::sort( v.begin(), v.end() ); // algoritmus
    std::for_each( v.begin(), v.end(), print );
    std::endl( std::cout );
}