void f( int i )
{
    int *a = new int[ i ];
    int *b = a;
    int *c = a;
    int *d = c;
    delete [] b;
}
int main()
{
    f( 9 );
}