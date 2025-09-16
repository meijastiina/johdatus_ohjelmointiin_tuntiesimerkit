#include <stdio.h>

int main()
{
    // luo tarvittavat  muuttujat
    char name[50]; // käyttäjän syöttämä nimi
    int times; // käyttäjän syöttämä toistokertojen määrä
    int i = 1; // iteraattorimuuttuja
    // kysyy käyttäjän nimen
    printf("\nName: ");
    scanf("%s", &name);
    // ja sen montako kertaa se tulostetaan näytölle.
    printf("\nHow many times you want to print: ");
    scanf("%d", &times);
    // Sitten tulostaa nimen näytölle em. kertaa.
    printf("\n-------------- WHILE ----------\n");
    while ( i <= times )
    {
        printf("%s ", &name);
        i++;
    }
    printf("\n-------------- DO ... WHILE ----------\n");
    i = 1;
    do
    {
        printf("%s ", &name);
        i++;
    } while ( i <= times );
    printf("\n-------------- FOR ----------\n");
    for ( i = 1; i <= times; i++ )
    {
        printf("%s ", &name);
    }
    return 0;
}
