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
    while ( counter < 5 ) {
        // Tulostetaan syöte
        printf("\n%s", name);
        counter++;
    }
    return 0;
}
