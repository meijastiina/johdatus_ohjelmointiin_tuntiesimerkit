#include <stdio.h>

int main()
{
    /*********** MUUTTUJAT *******************/
    // Luodaan merkkimuuttuja luettavalle tiedolle
    char letterFromFile;
    // Luodaan kokonaislukumuuttuja luettavalle tiedolle
    int numberFromFile;
    // Luodaan merkkitaulukkomuuttuja luettavalle tiedolle
    char textFromFile[255];
    // Luodaan muuttuja tiedostopointterille
    FILE *filepointer;

    /*********** FSCANF *******************/
    // Avaa tiedosto
    filepointer=fopen("C:/tmp/test_files/test.txt","r");
    if (filepointer != NULL ) {
        // Lue tiedoston sisältö
        fscanf(filepointer, "%d", &numberFromFile);
        // Tulosta näytölle
        printf("\n****************** FSCANF ***************");
        printf("\nNumber from file: %d", numberFromFile);
        // Sulje tiedosto
        fclose(filepointer);
    } else {
        perror("\nError: ");
    }
    /*********** FGETS *******************/
    // Avaa tiedosto
    filepointer=fopen("C:/tmp/test_files/test.txt","r");
    // Lue tiedoston sisältö
    printf("\n****************** FGETS ***************\n");
    printf("Text from file: \n");
    while( fgets(textFromFile, 255, filepointer) != NULL) {
        // Tulosta näytölle
        printf("%s", textFromFile);
    }
    // Sulje tiedosto
    fclose(filepointer);

    /*********** FGETC *******************/
    // Avaa tiedosto
    filepointer=fopen("C:/tmp/test_files/test.txt","r");
    // Lue tiedoston sisältö
    printf("\n****************** FGETC ***************\n");
    printf("Characters from file: \n");
    while( (letterFromFile = fgetc(filepointer)) != EOF) {
        // Tulosta näytölle
        printf("%c", letterFromFile);
    }
    // Sulje tiedosto
    fclose(filepointer);

    /*********** FPRINTF *******************/
    // Avaa tiedosto
    filepointer=fopen("C:/tmp/test_files/test.txt","a");
    // Lue tiedoston sisältö
    printf("\n****************** FPRINTF ***************\n");
    fprintf(filepointer, "This line has been written by frprintf\n");
    // Sulje tiedosto
    fclose(filepointer);
    return 0;
}
