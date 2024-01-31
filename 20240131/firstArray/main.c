#include <stdio.h>

int main()
{
    // Create an array that has the following items: 5, 15, 55, 35, 2, 157.
    int numbers[6] = {5, 15, 55, 35, 2, 157};
    //Print out "First item in the array is [first item]".
    printf("First item in the array is %d!\n", numbers[0]);
    // Update the array so that each odd index value is 0 and even index values are 1.
    numbers[1] = 0;
    numbers[1] = 5;
    numbers[1] = 50;
    numbers[2] = 1;
    numbers[3] = 0;
    numbers[4] = 1;
    numbers[5] = 0;
    // Print out each value "Value in index 0 is [value 0]. Value in index 1 is [value 1]…"
    printf("Value in index 0 is %d.\n", numbers[0]);
    printf("Value in index 1 is %d.\n", numbers[1]);
    printf("Value in index 2 is %d.\n", numbers[2]);
    printf("Value in index 3 is %d.\n", numbers[3]);
    printf("Value in index 4 is %d.\n", numbers[4]);
    printf("Value in index 5 is %d.\n", numbers[5]);
    return 0;
}
