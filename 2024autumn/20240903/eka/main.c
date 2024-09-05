/*
 * Tämä on testiohjelma, jossa harjoitellaan printf:n
 * käyttöä
 * Tekijä: Meija Lohiniva
 * Pvm: 20240903
 * */
#include <stdio.h>

// Pääohjelma alkaa
int main()
{
    // Tulosta teksti näytölle
    printf("Hello World!\n");
    // Tulosta luvut näytölle
    printf("Luku1 on %d. Luku2 on %d.\n", 15, 55);

    int number1 = 12;
    int number2;
    number2 = 55;

    printf("Number1 value is %d and number2 value is %d.", number1, number2);

    /*-------------TULOSTA KÄYTTÄJÄN ANTAMA LUKU-------------------*/
    // luo muuttuja johon käyttäjän syöttämä luku tallennetaan
    int enteredNumber;
    // pyydä käyttäjää syöttämään luku
    printf("\n\nPlease enter a number: ");
    // luetaan käyttäjän syöttämä luku
    scanf("%d", &enteredNumber);
    // tulosta näytölle käyttäjän syöttämä luku
    printf("You entered %d\n", enteredNumber);


    /*-------------SUMMA-------------------*/
    // luodaan muuttujat annaetuille luvuille ja summalle
    int firstNumber, secondNumber, sum;
    // pyydä käyttäjää syöttämään eka luku
    printf("\n\nPlease enter first number: ");
    // luetaan käyttäjän syöttämä eka luku
    scanf("%d", &firstNumber);
    // pyydä käyttäjää syöttämään eka luku
    printf("\nPlease enter second number: ");
    // luetaan käyttäjän syöttämä eka luku
    scanf("%d", &secondNumber);
    // laske summa
    sum = firstNumber + secondNumber;
    // tulostetaan summa näytölle
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);

    // Päätä ohjelman suoritus
    return 0;
}
