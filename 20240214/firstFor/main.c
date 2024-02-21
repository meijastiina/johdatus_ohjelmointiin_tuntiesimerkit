#include <stdio.h>

int main()
{
    // Tulosta luvut 0-10
    for ( int i = 0; i <= 10; i++ ) {
        printf("\n%d", i);
    }
    // Tulosta luvut 10-0
    for ( int i = 10; i >= 0; i-- ) {
        printf("\n%d", i);
    }
    return 0;
}
