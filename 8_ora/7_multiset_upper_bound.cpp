#include <set>
#include <iterator>
#include <iostream>
double rate( double cnt, int s )
{
    return 100.0 * cnt / s;
}
int main()
{
    std::multiset<char> stat(
            std::istream_iterator<char>( std::cin ),
            std::istream_iterator<char>() );
    for( std::multiset<char>::iterator it = stat.begin();
         it != stat.end();)
    {
        int cnt = stat.count( *it );
        std::cout << *it << ':'
                  << stat.count( *it )
                  << "(" << rate( cnt, stat.size() )
                  << "%)" << std::endl;
        it = stat.upper_bound( *it );
    }
}