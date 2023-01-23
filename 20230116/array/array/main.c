#include <stdio.h>

int main()
{
    // Create an array that has the following items: 5, 15, 55, 35, 2, 157.
    int myArray[6] = { 5, 15, 55, 35, 2, 157 };
    // Print out "First item in the array is [first item]".
    printf("First item in the array is %d\n", myArray[0]);
    // Aseta indeksin 0 arvoksi 1
    myArray[0] = 1;
    // Aseta indeksin 1 arvoksi 0
    myArray[1] = 0;
    // Aseta indeksin 2 arvoksi 1
    myArray[2] = 1;
    myArray[3] = 0;
    myArray[4] = 1;
    myArray[5] = 0;

    // Tulosta indeksin 0 arvo
    printf("\nValue in index 0 is %d.", myArray[0]);
    printf("\nValue in index 1 is %d.", myArray[1]);
    printf("\nValue in index 2 is %d.", myArray[2]);
    printf("\nValue in index 3 is %d.", myArray[3]);
    printf("\nValue in index 4 is %d.", myArray[4]);
    printf("\nValue in index 5 is %d.", myArray[5]);

    return 0;
}
