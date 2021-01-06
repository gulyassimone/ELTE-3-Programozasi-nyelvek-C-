#include <set>
#include <iostream>
#include <iterator>
#include <algorithm>
int main()
{
    std::multiset<int> m;
    int i;
    while( std::cin >> i )
    {
        m.insert( i );
    }
    std::copy( m.begin(),
               m.end(),
               std::ostream_iterator<int>( std::cout, " " ) );
    std::endl( std::cout );
}