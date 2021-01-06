#include <map>
#include <algorithm>
#include <iostream>
double rate( int cnt, int s )
{
    return 100.0 * cnt / s;
}
void print( const std::pair<char, int>& p )
{
    std::cout << p.first << ':'
              << p.second << std::endl;
}
class Print
{
    int s;
public:
    Print( int i ) { s = i; }
    void operator()( const std::pair<char, int>& p )
    {
        std::cout << p.first << ':'
                  << p.second << "("
                  << rate( p.second, s )
                  << "%)" << std::endl;
    }
};
int main()
{
    std::map<char, int> stat;
    int size = 0;
    char ch;
    while( std::cin >> ch )
    {
        ++stat[ ch ];
        ++size;
    }
    std::cout << size << std::endl;
    std::for_each( stat.begin(),
                   stat.end(),
                   Print( size ) );
}