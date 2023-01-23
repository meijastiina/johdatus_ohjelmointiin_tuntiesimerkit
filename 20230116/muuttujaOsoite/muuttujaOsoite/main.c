#include <stdio.h>

int main()
{
    // Luodaan kokonaislukumuuttuja number
    int number;
    // Pyydä käyttäjää syöttämään numero
    printf("\nPlease enter number: ");
    // Lukea käyttäjän syöttämä numero
    scanf("%d", &number);
    // Tulosta käyttäjän syöttämä numero
    printf("\nYou are entered %d.", number);
    // Kasvata number-muuttujaa yhdellä
    number++;
    printf("\nNumber incremented by one is %d.", number);
    number--;
    printf("\nNumber decremented by one is %d.", number);
    number = number + 78;
    printf("\nNumber + 78 is %d.", number);
    return 0;
}
