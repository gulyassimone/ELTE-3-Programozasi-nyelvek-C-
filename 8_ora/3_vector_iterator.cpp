#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
void print( const int& i )
{
    std::cout << i << ' ';
}
int main()
{
    std::vector<int> v(
            std::istream_iterator<int>( std::cin ),
            std::istream_iterator<int>() );
    std::sort( v.begin(), v.end() ); // algoritmus
    std::for_each( v.begin(), v.end(), print );
    std::endl( std::cout );
}