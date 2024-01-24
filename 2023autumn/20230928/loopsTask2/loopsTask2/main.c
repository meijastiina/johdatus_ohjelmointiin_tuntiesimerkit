/*
 * . Tee C-kielinen ohjelma joka lukee kysyy käyttäjän nimen ja sen montako kertaa se
tulostetaan näytölle.

Sitten tulostaa nimen näytölle em. kertaa. Tee ratkaisu
a) while toistolla
b) do-while toistolla
c) for-toistolla
(HUOM! voit tehdä, jos haluat a)-c) kohdat samaan ohjelmaan peräkkäin näin sinun ei
tarvitse tehdä kolmea erillistä ohjelmaa)

*/
#include <stdio.h>

int main()
{
    // Luo muuttuja syötetylle nimelle
    char name[50];
    // Luo muuttuja toistojen lukumäärälle
    int repetitions;
    // Luo muuttuja käytettäväksi silmukoissa laskurina
    int currentRepetition = 0;

    // Pyydä käyttäjää syöttämään nimi
    printf("\nName: ");
    // Lue käyttäjän syöttämä nimi
    scanf("%s", name);
    // Pyydä käyttäjää syöttämään toistojen lkm
    printf("\nNumber of repetitions: ");
    // Lue käyttäjän syöttämä toistojen lkm
    scanf("%d", &repetitions);
    // Tulosta väliotsikko
    printf("\n*************** WHILE ***************");
    while(currentRepetition < repetitions)
    {
        // Tulosta käyttäjän syöttämä nimi niin monta kertaa kuin käyttäjä on pyytänyt
        printf("\n%s", name);
        // Kasvatetaan laskuria jokaisen tulostuksen jälkeen
        currentRepetition++;
    }
    // Tulosta väliotsikko
    printf("\n*************** DO WHILE ***************");
    // Nollaa laskurimuuttujan arvo
    currentRepetition = 0;
    do
    {
        // Tulosta käyttäjän syöttämä nimi niin monta kertaa kuin käyttäjä on pyytänyt
        printf("\n%s", name);
        // Kasvatetaan laskuria jokaisen tulostuksen jälkeen
        currentRepetition++;
    } while(currentRepetition < repetitions);
    // Tulosta väliotsikko
    printf("\n*************** FOR ***************");
    for( currentRepetition = 0; currentRepetition < repetitions; currentRepetition++) {
        // Tulosta käyttäjän syöttämä nimi niin monta kertaa kuin käyttäjä on pyytänyt
        printf("\n%s", name);
    }

    // Lopeta ohjelman suoritus
    return 0;
}
