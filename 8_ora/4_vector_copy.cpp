#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
int main()
{
    std::vector<int> v(
            std::istream_iterator<int>( std::cin ),
            std::istream_iterator<int>() );
    std::sort( v.begin(), v.end() ); // algoritmus
    std::copy( v.begin(),
               v.end(),
               std::ostream_iterator<int>( std::cout, " " ) );
    std::endl( std::cout );
}