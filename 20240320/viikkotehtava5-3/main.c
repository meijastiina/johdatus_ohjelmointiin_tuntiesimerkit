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

Kirjoita ohjelma, joka toimii kuten edellinen sovellus, mutta
nyt kysytään viiden auton tiedot
autojen tietoja ei tulosteta ruudulle
kun autojen tiedot on annettu käyttäjältä kysytään auton merkki(brand) ja tulostetaan kaikki
kyseisen merkin autojen tiedot. Käyttäjältä kysellään merkkiä, kunnes hän antaa merkiksi
”LOPETA”.
*/
#include <stdio.h>
#include <string.h>

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
    // Luo Car-tyyppinen taulukko, johon voidaan tallentaa 5 alkiota.
    car carArray[5];
    // luo Car-tyyppinen muuttuja nimeltään car_1
    car car_1;
    // luo muuttuja tulostettavalle merkille
    char brandToPrint[20];

    // Lisää koodi, jolla käyttäjältä kysellään viiden auton tiedot ja ne tallennetaan em. taulukkoon.
    for ( int currentItem = 0; currentItem < 5; currentItem++)
    {
        // lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
        printf("\nEnter car_%d brand: ", currentItem);
        scanf("%s", carArray[currentItem].brand);
        printf("\nEnter car_%d model: ", currentItem);
        scanf("%s", carArray[currentItem].model);
        printf("\nEnter car_%d year model: ", currentItem);
        scanf("%d", &carArray[currentItem].yearModel);
    }
    printf("\n----------- Data entered. -------------\n");

    // kysytään auton merkki(brand)
    // TOISTA kyselemistä, kunnes hän antaa merkiksi ”LOPETA”.
    do
    {
        printf("\nEnter brand to be printed: ");
        scanf("%s", brandToPrint);

        // ja tulostetaan kaikki kyseisen merkin autojen tiedot
        printf("\n----------- %s -------------\n", brandToPrint);

        // Lisää koodi, jolla em. autojen tiedot tulostetaan ruudulle.
        for ( int currentItem = 0; currentItem < 5; currentItem++)
        {
            // JOS tämä auto on haluttua merkkiä
            if ( strcmp(carArray[currentItem].brand, brandToPrint) == 0)
            {
                // tulosta
                printf("\ncar_%d brand: %s", currentItem, carArray[currentItem].brand);
                printf("\ncar_%d model: %s", currentItem, carArray[currentItem].model);
                printf("\ncar_%d year model: %d", currentItem, carArray[currentItem].yearModel);
            }
        }
    } while( strcmp(brandToPrint, "LOPETA") ); // kunnes hän antaa merkiksi ”LOPETA”.
    return 0;
}
