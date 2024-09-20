#include <stdio.h>

int main()
{
    for ( int row = 0; row <= 9; row++ )
    {
        for ( int col = 0; col <= 9; col++ )
        {
            printf("(%d.%d)", row, col);
        }
        // rivi käsitelty -> tulosta rivinvaihto
        printf("\n");
    }
    return 0;
}
