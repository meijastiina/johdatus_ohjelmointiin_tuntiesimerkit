#include <stdio.h>

int main()
{
    // luo muuttuja name
    char name[50];
    // luo laskurimuuttuja
    int counter = 0;
    // pyydä käyttäjää syöttämään nimi
    printf("Name: ");
    // lue nimi
    scanf("%s", &name);
    // toista 5 kertaa

    do {
        // tulosta nimi
        printf("\n%s", name);
        // kasvata counterin arvoa yhdellä
        counter++;
        // counter = counter + 1;
    } while( counter < 5 );
    return 0;
}
