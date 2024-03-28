#include <stdio.h>

void printHello()
{
    printf("Hello");
}

/*
 * Tulostaa parametrina annetun tiedoston sisällön näytölle. Hoitaa tiedoston avaamisen ja sulkemisen.
 */
void printFileContents(char *filePath)
{
    // Avaa tiedosto
    FILE *filepointer;
    char readString[255];

    filepointer = fopen(filePath, "r");
    // Looppaa tiedosto läpi ja tulosta näytölle
    while (fgets(readString, 255, filepointer) != NULL) {
        // Tulosta näytölle
        printf("%s", readString);
    }
    // Sulje tiedosto
    fclose(filepointer);
}
