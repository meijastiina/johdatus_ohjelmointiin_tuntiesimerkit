#include <ctype.h>
#include <stdio.h> // This is needed for printf
#include <stdbool.h> // This is needed for boolean variables
#include <stdlib.h> // This is needed for atoi
#include <string.h> // This is needed for string comparison and string copy
#include "myFunctions.h" // If you create your own, use quotes instead of angle brackets

int main()
{
    const char SAME_STRINGS_MESSAGE[] = "Strings are the same";
    const int MAX_STUDENTS = 10;

    bool isFileOpen = false;
    char test[] = "1";

    char merkki = 'a';
    int number;

    number = myCoolFunction();
    // Is merkki a letter
    if ( isalpha(merkki)) {

    }
    int i = 0;
    while ( i <= 5)
    {
        printf("\n%d", i);
        i++;
    }
    do {
        printf("\n%d", i);
        i++;
    } while ( i <= 5);
    if ( strcmp(test, "1") == 0) {
        printf(SAME_STRINGS_MESSAGE);
    }
    number = atoi(test);
    printf("Hello World!\n");
    myCoolFunction();
    return 0;
}
