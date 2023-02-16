/*
 * Kirjoita ohjelma,
 *  -jossa on tietue nimeltään Car, jossa seuraavat kentät:
 *      • brand CHAR(20)
 *      • model CHAR(50)
 *      • yearModel INT
 *  -luo Car-tyyppinen muuttuja nimeltään car_1
 *  -lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
 *  -lisää koodi, jolla tulostetaan car_1:n tiedot
*/

/* *  tietue nimeltään Car, jossa seuraavat kentät:
 *      • brand CHAR(20)
 *      • model CHAR(50)
 *      • yearModel INT
 */
#include <string.h>
typedef struct Car {
    char brand[20];
    char model[50];
    int yearModel;
} car;

#include <stdio.h>

int main()
{
    // Luo Car-tyyppinen taulukko, johon voidaan tallentaa 3 alkiota.
    car cars[5];
    // käyttäjältä kysellään kolmen auton tiedot ja ne tallennetaan em. taulukkoon
    // loopataan kolme kertaa
    for ( int i = 0; i < 5; i++ ) {
        printf("\nBrand: ");
        scanf("%s", cars[i].brand);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year model: ");
        scanf("%d", &cars[i].yearModel);
        printf("----------\n");
    }
    // kysytään auton merkki(brand)
    printf("\n-- Search for a specific brand --\n");
    printf("Brand: ");
    char brandToPrint[20];
    scanf("%s", brandToPrint);
    // ja tulostetaan kaikki kyseisen merkin autojen tiedot
    printf("\n----- %s -----\n", brandToPrint);
    for ( int i = 0; i < 5; i++ ) {
        // Jos auto on valittua merkkiä
        if ( strcmp(cars[i].brand, brandToPrint) == 0 ) {
            printf("\n%-*s%s", 15, "Brand: ", cars[i].brand);
            printf("\n%-*s%s", 15, "Model: ", cars[i].model);
            printf("\n%-*s%d\n", 15, "Year model:", cars[i].yearModel);
        }
    }
    return 0;
}
