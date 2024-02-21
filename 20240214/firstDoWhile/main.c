#include <stdio.h>

int main()
{
    // Luodaan muuttujat
    char name[50];
    int counter = 0;

    // Pyydä käyttäjää syöttämään nimi
    printf("\nName: ");
    // Luetaan käyttäjän syöte muuttujaan
    scanf("%s", &name);
    // Toistetaan viisi kertaa
    do {
        // Tulostetaan syöte
        printf("\n%s", name);
        counter++;
    } while ( counter < 5 );
    return 0;
}
