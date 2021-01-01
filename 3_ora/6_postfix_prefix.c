#include <stdio.h>
int main()
{
    int x = 3;
    int y = 3;
    printf( "%d %d\n", x++, ++y );
    printf( "%d %d\n", x, y );
    return 0;
}