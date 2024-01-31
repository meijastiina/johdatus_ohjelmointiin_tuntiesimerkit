#include <stdio.h>

int main()
{
    // Let's create an integer variable for entered number
    int number;
    // Prompt user to enter a number.
    printf("\nEnter number: ");
    scanf("%d", &number);
    // Check if entered number is 0
    switch(number){
        // If 0 -> print out "You entered a zero".
        case 0: {
            printf("\nYou entered a zero.\n");
            break;
        }
        case 5: {
            printf("\nYou entered a five.\n");
            break;
        }
        default: {
            // If no -> print out "You entered something else".
            printf("\nYou entered something else.\n");
        }
    }
    return 0;
}
