/*
 * Kirjoita ohjelma, -jossa on tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT
Luo Car-tyyppinen muuttuja nimeltään car_1.
Lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot.
Lisää koodi, jolla tulostetaan car_1:n tiedot.
*/
#include <stdio.h>
#include <string.h>

/* tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT
*/
typedef struct Car
{
    char brand[20];
    char model[5];
    int yearModel;
} car;

int main()
{
    // Luo Car-tyyppinen muuttuja nimeltään car_1.
    car car_1;
    // Lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot.
    printf("\nBrand: ");
    scanf("%s", &car_1.brand);
    printf("\nModel: ");
    scanf("%s", &car_1.model);
    printf("\nYear model: ");
    scanf("%d", &car_1.yearModel);
    // Lisää koodi, jolla tulostetaan car_1:n tiedot.
    printf("%s, %s, %d", car_1.brand, car_1.model, car_1.yearModel);
    printf("%d", sizeof(car_1.model));
    return 0;
}
