/*1. Kirjoita ohjelma, -jossa on tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT
-luo Car-tyyppinen muuttuja nimeltään car_1
-lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
-lisää koodi, jolla tulostetaan car_1:n tiedot
*/
#include <stdio.h>

// Create struct for car
typedef struct Car
{
    char brand[20];
} car;

// Main method. This is where execution starts.
int main()
{
    const int MAX_CARS = 5;
    // Let's create a car array
    car cars[MAX_CARS];

    // Let's ask user to enter three cars
    for (int i = 0; i < MAX_CARS; ++i) {
        printf("Car%d brand: ", i+1);
        scanf("%s", cars[i].brand);
    }

    // Let's print out cars
    for (int i = 0; i < MAX_CARS; ++i) {
        printf("Car%d brand is %s\n", i+1, cars[i].brand);
    }

    // Exit program
    return 0;
}
