#include <stdio.h>

// funktion prototyyppi
void printHello();
void printSum(int number1, int number2);
int getSum(int number1, int number2);

int main()
{
    // Kutsu printHello-funktiota
    printHello();
    // Kutsu printSum-funktiota
    printSum(1, 2);
    printSum(10000, 2123456);
    printSum(-10, 25);
    // Kutsu getSum-funktiota
    int sum = getSum(3, 5);
    printf("\n%d", sum);
    printf("\n%d", getSum(10, 20));
    return 0;
}

/* A simple function that prints text hello */
void printHello()
{
    printf("Hello!");
}

/* A function that sums two numbers and prints the result */
void printSum(int number1, int number2)
{
    printf("\n%d + %d = %d", number1, number2, number1 + number2);
}

/* A function that sums two numbers and returns the result */
int getSum(int number1, int number2)
{
    return number1 + number2;
}
