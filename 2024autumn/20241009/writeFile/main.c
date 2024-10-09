
#include <stdio.h>

int main()
{
    // Open the file.
    FILE *testFile;
    // Luo string muuttuja
    char fileContents[255];
    testFile = fopen("c:/tmp/testFile.txt", "w");
    // Write something in the file.
    fprintf(testFile, "This is written by C code");
    // Close the file.
    fclose(testFile);
    // Open the file again.
    testFile = fopen("c:/tmp/testFile.txt", "r");
    // Read the contents.
    fscanf(testFile, "%s", &fileContents);
    // Print the contents on the screen.
    printf("%s", fileContents);
    // Close the file.
    fclose(testFile);
    return 0;
}
