void print( int* a, int n )
{
    std::cout << n << std::endl;
    for( int i = 0; i < n; ++i )
    {
        std::cout << a[ i ] << ' ';
    }
    std::endl( std::cout );
}
int main()
{
    int s[] = { 7, 2, 8, 9, 3 };
    for( int i = 0; i < sizeof( s ) / sizeof( s[ 0 ] ); ++i )
    {
        ++s[ i ];
    }
    print( s, sizeof( s ) / sizeof( s[ 0 ] ) );
}