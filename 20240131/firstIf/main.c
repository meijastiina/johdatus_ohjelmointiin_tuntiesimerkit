#include <stdio.h>

int main()
{
    // Let's create an integer variable for entered number
    int number;
    // Prompt user to enter a number.
    printf("\nEnter number: ");
    scanf("%d", &number);
    // Check if entered number is 0
    if( number == 0 ){
        // If yes -> print out "You entered a zero".
        printf("\nYou entered a zero.\n");
    } else {
        // If no -> print out "You entered something else".
        printf("\nYou entered something else.\n");
    }
    return 0;
}
