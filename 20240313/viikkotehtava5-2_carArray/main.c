/*
 *  Kirjoita ohjelma,
 *  -jossa on tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT
-luo Car-tyyppinen muuttuja nimeltään car_1
-lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
-lisää koodi, jolla tulostetaan car_1:n tiedot

Luo Car-tyyppinen taulukko, johon voidaan tallentaa 3 alkiota.
Lisää koodi, jolla käyttäjältä kysellään kolmen auton tiedot ja ne tallennetaan em. taulukkoon.
Lisää koodi, jolla em. autojen tiedot tulostetaan ruudulle.
*/
#include <stdio.h>

/* Tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT */
typedef struct Car
{
    char brand[20];
    char model[50];
    int yearModel;
} car;


int main()
{
    // Luo Car-tyyppinen taulukko, johon voidaan tallentaa 3 alkiota.
    car carArray[3];
    // luo Car-tyyppinen muuttuja nimeltään car_1
    car car_1;
    // Lisää koodi, jolla käyttäjältä kysellään kolmen auton tiedot ja ne tallennetaan em. taulukkoon.
    for ( int currentItem = 0; currentItem < 3; currentItem++)
    {
        // lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
        printf("\nEnter car_%d brand: ", currentItem);
        scanf("%s", carArray[currentItem].brand);
        printf("\nEnter car_%d model: ", currentItem);
        scanf("%s", carArray[currentItem].model);
        printf("\nEnter car_%d year model: ", currentItem);
        scanf("%d", &carArray[currentItem].yearModel);
    }
    // Lisää koodi, jolla em. autojen tiedot tulostetaan ruudulle.
    for ( int currentItem = 0; currentItem < 3; currentItem++)
    {
        printf("\ncar_%d brand: %s", currentItem, carArray[currentItem].brand);
        printf("\ncar_%d model: %s", currentItem, carArray[currentItem].model);
        printf("\ncar_%d year model: %d", currentItem, carArray[currentItem].yearModel);
    }
    return 0;
}
