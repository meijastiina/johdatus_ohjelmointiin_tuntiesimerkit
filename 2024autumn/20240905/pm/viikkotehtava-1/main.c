// Käsky esiprosessorille (#), että sisällytetään kirjasto stdio
#include <stdio.h>

// Pääohjelma (main) alkaa. Ohjelman suoritus alkaa tästä
int main()
{
    /******* TASK 1 ****************
     * Mitä tarkoittaa muuttujan tietotyyppi?
     * Kirjoita esimerkit muuttujan määrittelystä
     * kokonaislukuna, liukulukuna ja merkkitietona.
     * ***************************/
    // Tulosta otsikko
    printf("****** TASK 1 ****************");
    // luo kokonaislukumuuttuja
    int number1 = 5;
    // luo liukulukumuuttuja
    float number2;
    number2 = 2.15; // desimaalierotin on piste
    // luo merkkitietomuuttuja
    char character1 = 'c';

    // Tulostetaan muuttujat
    printf("\nnumber1 value is %d\n", number1);
    printf("\nnumber2 value is %.2f\n", number2);
    printf("\ncharacter1 value is %c\n", character1);

    // Päättää ohjelman suorituksen
    return 0;
}
