/*
 * Tämä on harjoitustehtävä, jossa opetellaan printf:n käyttöä
 * Tekijä: Meija
 * Pvm: 17.01.2024
*/

#include <stdio.h> // Includataan stdio-kirjasto printf-funktiota varten

// Pääohjelma alkaa
int main()
{
    // Luo kokonaislukumuuttuja
    int age;
    // Luo liukulukumuuttuja
    float price = 12.50;
    // Tulostetaan näytölle
    printf("\n\n\nHello\nWorld!\nMy age is %d\n\n", 18);
    // Tulostetaan hinta
    printf("Price is %f", price);

    /*
     * Write code that
     * Defines two variables, number1 and number2.
     * Assigns values to the variables.
     * Prints out "Number1 value is [number1] and number2 value is [number2].
     */
    // Defines two variables, number1 and number2.
    int number1;
    int number2;
    // Assigns values to the variables.
    number1 = 12;
    number2 = 55;
    // Prints out "Number1 value is [number1] and number2 value is [number2].
    printf("\n\nNumber1 value is %d and number2 value is %d.\n\n", number1, number2);


    // Asks for the user to enter a number.
    printf("\n\nPlease enter a number: ");
    // Luo muuttuja
    int enteredNumber;
    scanf("%d", &enteredNumber);
    // Print out the entered number.
    printf("You entered %d\n", enteredNumber);
    return 0;
} // Pääohjelma päättyy
