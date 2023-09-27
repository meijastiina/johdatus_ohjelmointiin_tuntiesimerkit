/**
 * Create a simple function that:
 * prints text "Hello!"
 * Call the function to test it.
*/

#include <stdio.h>
// Function prototypes
void printSum(int, int);
void printHello();
int sum(int number1, int number2);

int main()
{
    // Call printHello function
    printHello();
    // Call printSum function
    printSum(1, 2);
    printSum(100, 27);
    printSum(-1, 0);
    printSum(1789, 2123456);
    printSum(-12341, 2);
    // Call sum -> When function is called print out the returned value.
    printf("\nSum function return value is %d", sum(1, 2));
    return 0;
}

// Create a simple function that: prints text "Hello!"
void printHello()
{
    printf("Hello!\n");
}
// Create a simple function that:
// Takes two numbers as input.
// Calculates the sum of these two.
// Prints out the result.
void printSum(int number1, int number2)
{
    printf("\n%d", number1 + number2);
}
/*Create a simple function that:
Takes two numbers as input.
Calculates the sum of given numbers.
Returns the result.
*/
int sum(int number1, int number2)
{
    return number1 + number2;
}
