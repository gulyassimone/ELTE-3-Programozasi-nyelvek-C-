#include <iostream>
double sum( int, double ( *a )( int ) );
double rec( int i )
{
    return 1. / i;
}
double mrec( int i )
{
    return 2. / i;
}
int main()
{
    std::cout << sum( 20, rec ) << std::endl;
    std::cout << sum( 20, mrec ) << std::endl;
}