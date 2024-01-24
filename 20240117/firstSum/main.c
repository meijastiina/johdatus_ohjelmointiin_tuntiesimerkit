#include <stdio.h>

int main()
{
    // Create variables
    int number1, number2, sum;

    // Asks for the user to enter first number
    printf("\nEnter number1: ");

    // Read user input
    scanf("%d", &number1);

    // Asks for the user to enter second number
    printf("\nEnter number2: ");

    // Read user input
    scanf("%d", &number2);

    // Calculate sum
    sum = number1 + number2;
    // Print out the sum of entered numbers.
    printf("\n%d + %d = %d\n", number1, number2, sum);
    return 0;
}
