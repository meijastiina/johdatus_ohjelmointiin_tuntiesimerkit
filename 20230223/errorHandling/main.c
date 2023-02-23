#include <stdio.h>
#include "myfunctions.h"

int main()
{
    // Experiment with the error handling. Try at least the following:
    // Try to open a file that doesn't exist. Show an error on the screen.
    FILE *filePointer;
    char fileName[] = "c:\\tmp\\testfoo123.txt";
    filePointer = fopen(fileName, "w");
    // Check if file opened ok
    if ( filePointer == NULL ) {
        printf("\nError opening file %s.\n", fileName);
        return 1;
    } else {
        printf("\nSuccesfully opened file %s.\n", fileName);
    }
    // Try to read a file that is not open. How can you handle this error?
    char content[255];
    fscanf(filePointer,"%s", content);
    printf("\n%s\n", content);
    // Try to write in a file that has been opened for reading, what happens?
    fputc('c',filePointer);
    // Function call to our library
    printSomething();
    return 0;
}
