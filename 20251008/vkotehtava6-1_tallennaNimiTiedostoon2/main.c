/*
 * 1. Kirjoita ohjelma, joka kysyy käyttäjän nimen ja tallentaa sen tiedostoon.
*/
#include <stdio.h>

int main()
{
    // Luo muuttuja tiedostonkäsittelyä varten
    FILE *filepointer;
    // Luo muuttuja kysyttyä nimeä varten
    char name[50];
    // Pyydä käyttäjää syöttämään nimi
    printf("Name: ");
    // Lue käyttäjän syöttämä nimi muuttujaan
    scanf("%s", name);
    // Avaa tiedosto
    filepointer = fopen("c:/tmp/meijantesti.txt", "w");
    // Kirjoita syötetty nimi tiedostoon
    fprintf(filepointer, "%s", name);
    // Sulje tiedosto
    fclose(filepointer);
    return 0;
}
