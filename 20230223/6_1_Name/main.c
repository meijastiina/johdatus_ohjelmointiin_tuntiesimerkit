#include <stdio.h>

int main()
{
    //1. Kirjoita ohjelma, joka kysyy käyttäjän nimen
    // Pyydä käyttäjää syöttämään nimi
    printf("\nName: ");
    // Luodaan muuttuja nimeä varten
    char name[50];
    char name2[50];
    // Lue käyttäjän syöte
    scanf("%s", name);
    // ja tallentaa sen tiedostoon.
    // Luodaan muuttuja tiedostopointteri
    FILE *filePointer;
    FILE *filePointer2;
    // Avataan tiedosto
    filePointer = fopen("c:/tmp/foo.txt", "w");
    // Kirjoitetaan tiedostoon nimi
    fprintf(filePointer, "%s", name);
    fclose(filePointer);

    filePointer2 = fopen("c:/tmp/foo.txt", "r");
    fscanf(filePointer2, "%s", name2);
    printf("Name in file: %s", name2);
    fclose(filePointer2);
    return 0;
}
