/*1. Kirjoita ohjelma, -jossa on tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT
-luo Car-tyyppinen muuttuja nimeltään car_1
-lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot
-lisää koodi, jolla tulostetaan car_1:n tiedot
*/
#include <stdio.h>
#include <string.h>

// Create struct for car
typedef struct Car
{
    char brand[20];
    char model[50];
} car;

// Main method. This is where execution starts.
int main()
{
    // Let's define number of cars
    const int MAX_CARS = 5;
    // Let's create a car array
    car cars[MAX_CARS];

    // Let's create a variable for brand to be printed
    char brandToBePrinted[20];

    // Let's ask user to enter three cars
    for (int i = 0; i < MAX_CARS; ++i) {
        printf("Car%d brand: ", i+1);
        scanf("%s", cars[i].brand);
        printf("Car%d model: ", i+1);
        scanf("%s", cars[i].model);
    }

    // Let's print out all cars
    for (int i = 0; i < MAX_CARS; ++i) {
        printf("Car%d brand is %s\n", i+1, cars[i].brand);
    }

    // Ask user to select brand to be printed
    printf("Enter brand to print: ");
    scanf("%s", brandToBePrinted);

    // Let's print out all cars with given brand
    for (int i = 0; i < MAX_CARS; ++i) {
        if ( strcmp(cars[i].brand, brandToBePrinted))
        printf("%s\n", i+1, cars[i].model);
    }


    // Exit program
    return 0;
}
