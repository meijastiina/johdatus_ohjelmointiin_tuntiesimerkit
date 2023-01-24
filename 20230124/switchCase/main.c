#include <stdio.h>

int main()
{
    // Create a variable for entered number
    int enteredNumber;
    // Prompt user to enter a number.
    printf("Please enter a number: \n");
    // Read user input
    scanf("%d", &enteredNumber);
    // Check if entered number is 0
    switch (enteredNumber) {
        case 0: {
            // If yes -> print out "You entered a zero".
            printf("\n You entered a zero.");
            break;
        }
        default: {
            // If no -> print out "You entered something else".
            printf("\nYou entered something else.");
        }
    }
    return 0;
}
