#include <stdio.h>

int main()
{
    // Create a variable for user input
    int userNumber;
    // Ask user to enter a number
    printf("\nEnter a number: ");
    // Read user input
    scanf("%d", &userNumber);

    switch(userNumber) {
    case 0: {
        // user entered zero
        printf("You entered zero.");
        break;
    }
    case 1: {
        printf("You entered one.");
        break;
    }
    default: {
        printf("You entered something else.");
    }

    }

    // End program
    return 0;
}
