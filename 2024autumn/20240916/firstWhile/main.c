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
    while( counter < 5 )
    {
        // tulosta nimi
        printf("\n%s", name);
        // kasvata counterin arvoa yhdellä
        counter++;
        // counter = counter + 1;
    }
    return 0;
}
