// 1. Kirjoita ohjelma, joka kysyy käyttäjän nimen ja tallentaa sen tiedostoon.

#include <stdio.h>

int main()
{
    // Luodaan muuttuja nimelle
    char nimi[50];

    // Pyydä käyttäjää syöttämään nimi
    printf("Name:");
    // Lue käyttäjän syöte muuttujaan
    scanf("%s", nimi);

    // luodaan muuttuja tiedoston käsittelyä varten
    FILE *filepointer;
    // avaa tiedosto kirjoitusmoodissa
    filepointer = fopen("c:/tmp/filetest.txt", "a");

    // JOS tiedoston avaaminen onnistui
    if(filepointer != NULL)
    {
        // kirjoita nimi tiedostoon
        fprintf(filepointer, "%s", nimi);
        // sulje tiedosto
        fclose(filepointer);
    } else
    {
        // ilmoita virhe
        printf("Avaaminen ei onnistunut");
    }
    return 0;
}
