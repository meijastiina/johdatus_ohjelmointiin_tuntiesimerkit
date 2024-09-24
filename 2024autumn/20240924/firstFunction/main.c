#include <stdio.h>
// prototyypit
void printHello();
void printSum(int, int);
int calculateSum(int number1, int number2);

int main()
{
    // kutsutaan funktiota printHello
    printHello();
    printHello();
    printHello();
    // kutsutaan summa-funktiota
    printSum(1, 45);
    printSum(11234, 45);
    printSum(1, 457894);
    // kutsutaan laskeSumma-funktiota
    int sum = calculateSum(0, 0);
    printf("\n%d", sum);
    printf("\n%d", calculateSum(10, 780));
    return 0;
}

// Tee funktio, joka tulostaa näytölle Hello
void printHello()
{
    printf("Hello\n");
}

// Tee funktio, joka laskee kahden luvun summan
// ja tulostaa sen näytölle
void printSum(int number1, int number2)
{
    printf("\nSum is %d", number1 + number2);
}

// Tee funktio, joka laskee kahden luvun summan
// ja palauttaa sen
int calculateSum(int number1, int number2)
{
    // Palauta summa
    return number1 + number2;
}
