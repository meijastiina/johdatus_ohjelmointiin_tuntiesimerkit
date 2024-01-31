#include <stdio.h>

int main()
{
    int x = 1;
    int y = 11;
    // x needs to be within range 1-10
    if ( x >= 1 && x <= 10 ) {
        printf("\nX is within range 1-10");
    }
    // x needs to be outside range 1-10
    if ( x < 1 || x > 10 ) {
        printf("\nX is outside range 1-10");
    }
    // x needs to be within and y outside range 1-10
    if ( (x >= 1 && x <= 10) && ( y < 1 || y > 10 )) {
        printf("\nX is within range 1-10 and y is outside");
    }
    return 0;
}
