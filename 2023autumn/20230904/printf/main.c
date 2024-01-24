/*
 * Tämä on koodausharjoitus Johdatus ohjelmointiin -kurssin toisella oppitunnilla
 */


 #include <stdio.h>
// Tästä alkaa pääohjelma
int main()
{
    printf("\nHello World!\n\n\n. This is our %d lesson. Today is %d.09.2023.\n", 2, 4);

    int number1 = 1;
    int number2 = 2;
    printf("\nNumber1 value is %d and number2 value is %d.\n", number1, number2);
    /************* FIRST INPUT *****/
    // Luo muuttuja käyttäjän syötteelle
    int number;
    // Pyydä käyttäjää syöttämään numero
    printf("\nPlease enter a number\n");
    // Lue käyttäjän syöttämä numero
    scanf("%d", &number);
    // Tulosta numero
    printf("You entered %d\n", number);

    /************* FIRST SUM *****/
    // Luo muuttuja käyttäjän syötteelle
    int numberOne, numberTwo;
    // Pyydä käyttäjää syöttämään numero
    printf("\nPlease enter a number\n");
    // Lue käyttäjän syöttämä numero
    scanf("%d", &numberOne);
    // Pyydä käyttäjää syöttämään toinen numero
    printf("\nPlease enter another number\n");
    // Lue käyttäjän syöttämä numero
    scanf("%d", &numberTwo);
    // Tulosta numeroiden summa
    printf("You entered numbers %d and %d. The sum of these is %d.\n", numberOne, numberTwo, numberOne + numberTwo);

    /*************** CASTING ********************/
    int a = 10, b = 3;
    float result;
    result = (float)a / (float)b;
    printf("%.2f", result);

    /*************** ARRAY ********************/
    int grades[6] = {4,5,3,4,5,0};
    printf("\nThe grade for week 1 is %d.\n", grades[0]);
    int average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5]) / 6;
    printf("\nThe grade average is %d.\n", average);

    return 0; // Päätä ohjelman suoritus
}
