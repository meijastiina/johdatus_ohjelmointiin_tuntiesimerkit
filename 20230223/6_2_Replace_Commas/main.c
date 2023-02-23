#include <stdio.h>

int main()
{

    //Kirjoita sitten ohjelma, joka lukee tiedostoa source.txt
    FILE *sourceFilePointer;
    FILE *targetFilePointer;
    char currentCharFromFile;
    // Avataan tiedosto lukumoodissa
    sourceFilePointer = fopen("c:/tmp/source.txt", "r");
    // Avataan tiedosto kirjoitusmoodissa
    targetFilePointer = fopen("c:/tmp/target.txt", "a");
    // luetaan merkki kerrallaan kunnes saavutetaan end of file
    while((currentCharFromFile = fgetc(sourceFilePointer)) != EOF )
    {
        // jos luettu merkki on pilkku
        if ( currentCharFromFile == ',')
        {
            // korvataan puolipisteellä
            fputc(';', targetFilePointer);
        } else {
            // ei korvata, vaan kirjoitetaan sellaisenaan
            fputc(currentCharFromFile, targetFilePointer);
        }

        // ja kirjoittaa uuden tiedoston nimeltään target.txt,
    }
    // Suljetaan tiedostot
    fclose(sourceFilePointer);
    fclose(targetFilePointer);
    return 0;
}
