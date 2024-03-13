/*
 *  Kirjoita ohjelma,
 *  -jossa on tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT
-luo Car-tyyppinen muuttuja nimeltään car_1
-lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
-lisää koodi, jolla tulostetaan car_1:n tiedot
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
    // luo Car-tyyppinen muuttuja nimeltään car_1
    car car_1;

    // lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
    printf("\nEnter car_1 brand: ");
    scanf("%s", car_1.brand);
    printf("\nEnter car_1 model: ");
    scanf("%s", car_1.model);
    printf("\nEnter car_1 year model: ");
    scanf("%d", &car_1.yearModel);

    // lisää koodi, jolla tulostetaan car_1:n tiedot
    printf("\ncar_1 brand: %s", car_1.brand);
    printf("\ncar_1 model: %s", car_1.model);
    printf("\ncar_1 year model: %d", car_1.yearModel);
    return 0;
}
