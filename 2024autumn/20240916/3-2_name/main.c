#include <stdio.h>

int main()
{
    // luo muuttujat: nimi, toistojen lkm, laskuri
    char name[50];
    int numberOfRepetitions;
    int counter = 0;
    // pyydä käyttäjää syöttämään nimi
    printf("Name: ");
    // lue käyttäjän syöte
    scanf("%s", &name);
    // pyydä käyttäjää syöttämään toistojen lkm
    printf("Number of repetitions: ");
    // lue käyttäjän syöte
    scanf("%d", &numberOfRepetitions);
    while( counter < numberOfRepetitions )
    {
        // tulosta nimi
        printf("%s", name);
        counter++;
    }
    return 0;
}
