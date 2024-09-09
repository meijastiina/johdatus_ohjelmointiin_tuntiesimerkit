#include <stdio.h>

int main()
{
    // Create a variable for user input
    int userNumber;
    // Ask user to enter a number
    printf("\nEnter a number: ");
    // Read user input
    scanf("%d", &userNumber);
    // If entered number is 0
    if(userNumber==0)
    {
        // Print out "You entered 0"
        printf("\nYou entered 0");
    } else {
    // If not
        // Print out "You entered something else
        printf("\nYou entered something else");
    }
    // End program
    return 0;
}
