#include <set>
#include <iterator>
#include <iostream>
int main()
{
    std::multiset<char> stat(
            std::istream_iterator<char>( std::cin ),
            std::istream_iterator<char>() );
    for( std::multiset<char>::iterator it = stat.begin();
         it != stat.end();)
    {
        std::cout << *it << ':'
                  << stat.count( *it )
                  << std::endl;
        it = stat.upper_bound( *it );
    }
}