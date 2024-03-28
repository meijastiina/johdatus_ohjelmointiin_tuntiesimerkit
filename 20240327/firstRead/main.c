#include <stdio.h>

int main()
{

    // Luo muuttuja tiedostolle (pointer)
    FILE *filepointer;
    // Luo muuttuja luetulle merkkijonolle
    char readString[255];
    // Luo muuttuja luetulle merkille
    char readCharacter;

    // FPRINTF
    // Avaa tiedosto C:\GitHub\johdatus_ohjelmointiin_tuntiesimerkit\johdatus_ohjelmointiin_tuntiesimerkit\20240327\fileToRead.txt
    filepointer = fopen("C:/GitHub/johdatus_ohjelmointiin_tuntiesimerkit/johdatus_ohjelmointiin_tuntiesimerkit/20240327/fileToRead2.txt", "a");
    fprintf(filepointer, "testiteksti");
    fclose(filepointer);

    // FGETC
    filepointer = fopen("C:/GitHub/johdatus_ohjelmointiin_tuntiesimerkit/johdatus_ohjelmointiin_tuntiesimerkit/20240327/fileToRead.txt", "r");
    // Lue tiedoston sisältö muuttujaan
    //                   0  1   2  3  4
    // readString[255] = [F][ ][ ][ ][ ][][][]
    printf("\n-- FILE CONTENT (fgetc) --\n");

    // Luetaan tiedostoa merkki kerrallaan kunnes päästään tiedoston loppuun
    while( (readCharacter = fgetc(filepointer)) != EOF ) {
        // Tulosta näytölle
        printf("%c", readCharacter);
    }
    fclose(filepointer);

    // FGETS
    printf("\n-- FILE CONTENT (fgets) --\n");
    filepointer = fopen("C:/GitHub/johdatus_ohjelmointiin_tuntiesimerkit/johdatus_ohjelmointiin_tuntiesimerkit/20240327/fileToRead.txt", "r");
    while (fgets(readString, 255, filepointer) != NULL) {
        // Tulosta näytölle
        printf("%s", readString);
    }

    // SCANF
    // Lue tiedoston sisältö muuttujaan
    fscanf(filepointer, "%s", readString);
    // Tulosta näytölle
    printf("\n-- FILE CONTENT (scanf) --\n");
    printf("%s\n", readString);
    // Sulje tiedosto
    fclose(filepointer);

    // ERROR HANDLING
    printf("\n-- ERROR HANDLING --\n");
    // Yritetään avata tiedosto, jota ei ole olemassa
    filepointer = fopen("C:/GitHub/johdatus_ohjelmointiin_tuntiesimerkit/johdatus_ohjelmointiin_tuntiesimerkit/20240327/fileToRead3.txt", "r");
    // JOS avaaminen onnistui
    if ( filepointer != NULL ) {
        // Tulosta näytölle ok
        printf("\nOk!");
    } else {
    // MUUTEN
        // Tulosta näytölle virhe
        printf("\nVirhe!");
    }
    // Luo uusi muuttuja
    char anotherReadChar;

    // Lue tiedoston sisältö muuttujaan
    anotherReadChar = fgetc(filepointer);
    printf("%c\n", anotherReadChar);
    return 0;
}
