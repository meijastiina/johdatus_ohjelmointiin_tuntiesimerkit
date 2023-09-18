#include <stdio.h>

int main()
{
    // Luo muuttuja nimelle
    char name[50];
    // Pyydä käyttäjältä nimi
    printf("\nName: ");
    // Lue käyttäjän syöte
    scanf("%s", name);

    /*********** WHILE ***********/
    printf("\n*********** WHILE *********\n");
    // Luo iteraattorimuuttuja
    int i = 0;
    // Toista viisi kertaa
    while ( i < 5 ) {
        // Tulosta nimi
        printf("%s\n", name);
        // Kasvata laskuria yhdellä
        i++;
    }

    /*********** DO WHILE ***********/
    printf("\n*********** DO WHILE *********\n");
    // Nollaa iteraattorimuuttuja
    i = 0;
    // Toista viisi kertaa
    do {
        // Tulosta nimi
        printf("%s\n", name);
        // Kasvata laskuria yhdellä
        i++;
    } while ( i < 5 );

    /*********** TULOSTA NUMEROT 0-10 ***********/
    printf("\n*********** TULOSTA NUMEROT 0-10 *********\n");
    for (int i = 0; i <= 10; i++) {
        // Tulosta numero
        printf("%d ", i);
    }

    /*********** TULOSTA NUMEROT 10-0 ***********/
    printf("\n*********** TULOSTA NUMEROT 10-0 *********\n");
    for (int i = 10; i >= 0; i--) {
        // Tulosta numero
        printf("%d ", i);
    }

    /*********** NESTED LOOPS ***********/
    printf("\n*********** NESTED LOOPS *********\n");
    // Luodaan rivit
    for (int row = 0; row <= 9; row++) {
        // Luodaan sarakkeet tälle riville
        for (int col = 0; col <= 9; col++) {
            // Tulosta numero
            printf("(%d.%d)", row, col);
        }
        // Rivi tulostettu -> uusi rivi
        printf("\n");
    }
    return 0;
}
