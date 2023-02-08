#include <stdio.h>

// Create function that prints out Hello
// Input parameters: -
// Return value: void (none)
void printHello() {
    // Function body
    // Print out Hello
    printf("Hello!\n");
}

// Create function that sums two numbers given as input parameters
// Input parameters:    int number1
//                      int number2
// Return value: void (none)
void sum(int number1, int number2) {
    // Function body
    // Print out sum of given numbers
    printf("%d + %d = %d\n", number1, number2, number1 + number2);
}
int main()
{
    // Call function printHello()
    printHello();
    // Call function sum()
    sum(5, 8);
    sum(35, 48);
    sum(5543, 8234);
    sum(5, 84);
    return 0;
}
