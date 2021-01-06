#include <string>
#include <iostream>
class safe_string: public std::string
{
public:
    safe_string( const char* p ): std::string( p ? p : "" ) { }
};
int main()
{
    safe_string s( 0 );
    s.push_back( 'a' );
    s.push_back( 'b' );
    std::cout << s[ 1 ] << ' ' << s.length() << std::endl;
}