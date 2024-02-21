#include <stdio.h>

int main()
{
    // Tehdään ulompi silmukka joka toistaa rivit 0-9
    for (int row = 0; row <= 9; row++ ) {
        // Tehdään sisempi silmukka joka toistaa sarakkeet 0-9
        for (int col = 0; col <= 9; col++ ) {
            printf("(%d.%d)", row, col);
        }
        printf("\n");
    }
    return 0;
}
