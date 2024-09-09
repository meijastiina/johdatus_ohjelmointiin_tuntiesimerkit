#include <stdio.h>

int main()
{
    int numberArray[6] = {5, 15, 55, 35, 2, 157};
    printf("First item in the array is %d", numberArray[0]);

    // Viimeinen arvo -> 5
    numberArray[5] = 5;

    printf("Last item in the array is %d", numberArray[5]);
    return 0;
}
