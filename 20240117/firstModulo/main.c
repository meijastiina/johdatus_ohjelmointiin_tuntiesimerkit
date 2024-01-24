#include <stdio.h>

int main()
{
    // Create variables
    int numberOfSweets, numberOfKids, numberOfSweetsLeft;
    float numberOfSweetsPerKid;

    // Asks for the user to enter number of sweets
    printf("\nNumber of sweets: ");
    // Read user input
    scanf("%d", &numberOfSweets);
    // Asks for the user to enter number of kids
    printf("\nNumber of kids: ");
    // Read user input
    scanf("%d", &numberOfKids);

    // Print out number of sweets/kid
    numberOfSweetsPerKid = (float)numberOfSweets / (float)numberOfKids;
    printf("\nNumber of sweets for each kid: %.2f\n", numberOfSweetsPerKid);

    // Print out number of leftover sweets
    numberOfSweetsLeft = numberOfSweets % numberOfKids;
    printf("\nNumber of sweets left over: %d\n", numberOfSweetsLeft);
    return 0;
}

