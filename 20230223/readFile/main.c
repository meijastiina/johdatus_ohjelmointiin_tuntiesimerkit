/*
 *
 * Create a simple textfile.
 * Write a piece of code with the following functionality:
 * Open the file.
 * Read the contents of the file into a string variable.
 * Print the contents on the screen.
 * Close the file.
*/
#include <stdio.h>

int main()
{
    // Create variables
    FILE *filePointer; // This is a pointer for the file
    char content[255]; // This is a variable to store the content from the file
    // Open the file.
    filePointer = fopen("c:/tmp/testitiedosto.txt", "r");
    // Read the contents of the file into a string variable.
    //fscanf(filePointer, "%s", content);
    fgets(content, 255, filePointer);
    // Print the contents on the screen.
    printf("%s", content);
    // Close the file.
    fclose(filePointer);
    return 0;
}
