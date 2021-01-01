#include <stdio.h>
#define LOWER -40
#define UPPER 100
#define STEP 10
#define FAHR2CELS( x ) (5. / 9 * ( ( x ) - 32 ) )
int main()
{
    int i = LOWER;
    for(; i <= UPPER; i += STEP )
    {
        printf( "%d Fahr\t%f Cels\n", i, FAHR2CELS( i ) );
    }
    return 0;
}