#include <stdio.h>

int main()
{
    // Create variable for filepointer
    FILE *filehandler;
    // Create variable for read text
    char fileContent[255];
    // Open the file.
    filehandler = fopen("c:/tmp/test.txt", "r");
    // Test if opened succesfully
    if ( filehandler != NULL)
    {
        // Read the contents of the file into a string variable.
        fscanf(filehandler, "%s", fileContent);
        // Print the contents on the screen.
        printf("%s", fileContent);

        // Close the file.
        fclose(filehandler);
    }
    // Open the file.
    filehandler = fopen("c:/tmp/test.txt", "a");
    // Write 'i' in the file
    fputc('\n', filehandler);
    fputc('i', filehandler);
    // Close the file.
    fclose(filehandler);
    return 0;
}
