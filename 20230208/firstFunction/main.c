#include <stdio.h>
// Global variable
int globalNumber = 4;

// Function prototypes
void printHello();
void printSum(int, int);
int calculateSum(int, int);
void printText(char *text);
int main()
{
    int localNumber = 8;
    // Call function printHello()
    printHello();
    // Call function printSum()
    printSum(5, 8);
    printSum(35, 48);
    printSum(5543, 8234);
    printSum(5, 84);
    // Call function calculateSum()
    printf("\n%d\n", calculateSum(8, 78));
    printf("Global number in main is %d\n", globalNumber);
    printf("Local number in main is %d\n", localNumber);

    for ( int i = 0; i < 5; i++ ) {
        printf("\nOuter loop i is %d", i);
        for ( int j = 0; j < 5; j++ ) {
            printf("\nInner loop i is %d", j);
        }
    }

    printText("Print this text");
    return 0;
}


// Create function that prints out Hello
// Input parameters: -
// Return value: void (none)
void printHello() {
    int localNumber = 9;
    int globalNumber = 666;
    // Function body
    // Print out Hello
    printf("Hello!\n");
    printf("Global number in printHello is %d\n", globalNumber);
    printf("Local number in printHello is %d\n", localNumber);
}

// Create function that sums two numbers given as input parameters
// and prints it
// Input parameters:    int number1
//                      int number2
// Return value: void (none)
void printSum(int number1, int number2) {
    // Function body
    // Print out sum of given numbers
    printf("%d + %d = %d\n", number1, number2, number1 + number2);
}
// Create function that sums two numbers given as input parameters
// and returns sum
// Input parameters:    int number1
//                      int number2
// Return value: int - sum of the two given numbers
int calculateSum(int number1, int number2) {
    // Function body
    // Return sum of given numbers
    return number1 + number2;
}

void printText(char *text) {
    printf("\n%s", text);
}
