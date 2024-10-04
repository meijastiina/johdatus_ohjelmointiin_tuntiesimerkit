/*1. Kirjoita ohjelma, -jossa on tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT
-luo Car-tyyppinen muuttuja nimeltään car_1
-lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
-lisää koodi, jolla tulostetaan car_1:n tiedot
*/


// tietue nimeltään Car, jossa seuraavat kentät:
// • brand CHAR(20)
// • model CHAR(50)
// • yearModel INT
typedef struct Car
{
    char brand[20];
    char model[50];
    int yearModel;
} car;

#include <stdio.h>

int main()
{
    // luo Car-tyyppinen muuttuja nimeltään car_1
    struct Car car_1;
    car car_2;
    car cars[3];

    // kysytään autojen tiedot
    for (int i = 0; i < 3; ++i) {
        printf("Car%d brand: ", i + 1);
        scanf("%s", cars[i].brand);
        printf("Car%d model: ", i + 1);
        scanf("%s", cars[i].model);
        printf("Car%d year: ", i + 1);
        scanf("%d", &cars[i].yearModel);
    }
    // tulostetaan autojen tiedot
    for (int i = 0; i < 3; ++i) {
        printf("\nCar%d brand is %s", i + 1, cars[i].brand);
        printf("\nCar%d model is %s", i + 1, cars[i].model);
        printf("\nCar%d year model is %d", i + 1, cars[i].yearModel);
    }
    return 0;
}
