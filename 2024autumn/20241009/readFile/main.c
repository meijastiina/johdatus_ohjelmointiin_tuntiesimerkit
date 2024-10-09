#include <stdio.h>

int main()
{
    // Luo muuttuja file pointteri
    FILE *testFile;
    // Luo string muuttuja
    char fileContents[255];
    // Luo merkki-muuttuja
    char readCharacter;
    // Avaa tiedosto
    testFile = fopen("c:/tmp/testFile.txt", "r");

    // Lue tiedoston sisältö
    fscanf(testFile, "%s", &fileContents);
    // Tulosta tiedoston sisältö näytölle
    printf("\n******FSCANF******\n%s\n", fileContents);

    // Lue tiedoston sisältö
    fgets(fileContents, 255, testFile);
    // Tulosta tiedoston sisältö näytölle
    printf("\n******FGETS******\n%s\n", fileContents);

    printf("\n******FGETC******\n");
    // Lue tiedoston sisältö
    while (( readCharacter = fgetc(testFile)) != EOF)
    {
        // Tulosta luettu merkki
        printf("%c", readCharacter);

    }

    // Sulje tiedosto
    fclose(testFile);
    return 0;
}
