double sum( int n, double ( *a )( int i ) )
{
    double ret = 0.;
    for( int i = 1; i <= n; ++i )
    {
        ret += a( i );
    }
    return ret;
}