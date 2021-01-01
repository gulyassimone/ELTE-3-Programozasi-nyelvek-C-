#include <stdio.h>
int main()
{
    int a = 3;
    int b = 2;
    int c;
    printf( "%d\n", ( c = a ) * b + 4 );
    printf( "%d\n", c );
    return 0;
}