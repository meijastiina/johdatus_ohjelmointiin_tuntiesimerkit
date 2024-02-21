/*
 * 2. Tee C-kielinen ohjelma joka lukee kysyy käyttäjän nimen ja sen montako kertaa se
tulostetaan näytölle. Sitten tulostaa nimen näytölle em. kertaa. Tee ratkaisu
a) while toistolla
b) do-while toistolla
c) for-toistolla
(HUOM! voit tehdä, jos haluat a)-c) kohdat samaan ohjelmaan peräkkäin näin sinun ei
tarvitse tehdä kolmea erillistä ohjelmaa)
*/
#include <stdio.h>

int main()
{
    // Luodaan muuttujat
    char name[10];
    int repetitions, currentRepetition = 0;

    // Pyydä käyttäjää syöttämään nimi
    printf("Name: ");
    // Luetaan nimi muuttujaan
    scanf("%s", name);
    // Pyydä käyttäjää syöttämään toistokertojen määrä
    printf("\nRepetitions: ");
    // Luetaan toistokertojen määrä muuttujaan
    scanf("%d", &repetitions);
    // Toistetaan käyttäjän pyytämä määrä
    // WHILE
    printf("\n------------- WHILE --------------\n");
    while ( currentRepetition < repetitions ) {
        // Tulostetaan nimi
        printf("\n%s", name);
        currentRepetition++;
    }
    // DO...WHILE
    printf("\n------------- DO...WHILE --------------\n");
    // Nollataan laskuri, koska alkaa uusi loop
    currentRepetition = 0;
    do {
        // Tulostetaan nimi
        printf("\n%s", name);
        currentRepetition++;
    } while ( currentRepetition < repetitions );

    // FOR
    printf("\n------------- FOR --------------\n");
    for (currentRepetition = 0; currentRepetition < repetitions; currentRepetition++) {
        // Tulostetaan nimi
        printf("\n%s", name);
    }


    return 0;
}
