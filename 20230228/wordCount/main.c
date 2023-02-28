/*
 * Kirjoita ohjelma, joka laskee tiedostossa olevien sanojen ja rivien määrän.
 * Käytetään sääntönä, että sanojen erottimena toimii vain välilyönti.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Alusta muuttujat
    char readCharacter; // Tiedostosta luettu merkki
    int wordCount = 0; // Sanojen lukumäärä
    int lineCount = 0; // Rivien lukumäärä
    FILE *filePointer; // Filepointer
    bool withinWord = false; // Lippu joka nostetaan pystyyn kun ollaan sanan keskellä

    // Avaa tiedosto
    filePointer = fopen("c:/tmp/weektask6.txt", "r");
    // Lue tiedoston sisältöä merkki kerrallaan kunnes EOF
    while( (readCharacter = fgetc( filePointer )) != EOF )
    {
        // Jos merkki on jotain muuta kuin EOF -> tiedostossa on ainakin yksi rivi
        if ( lineCount == 0 ) {
            lineCount = 1;
        }
        // Jos ollaan sanan keskellä, nostetaan lippu pystyyn (withinWord trueksi)
        if (!( readCharacter == '\n' || readCharacter == ' ') )
        {
            withinWord = true;
        }
        printf("%c", readCharacter);
        // Jos uusi sana
        if ( (readCharacter == ' ' || readCharacter == '\n') && withinWord )
        {
            // Kasvata sanalaskuria
            wordCount++;
        }
        // Jos uusi rivi
        if( readCharacter == '\n')
        {
            // Vaihda withinWord falseksi
            withinWord = false;
            // Kasvata rivilaskuria
            lineCount++;
        }
    }
    // Tarkista oltiinko sanan keskellä
    if ( withinWord )
    {
        wordCount++;
    }
    // Sulje tiedosto
    fclose(filePointer);
    // Tulosta laskujen tulokset
    printf("\nNumber of words: %d", wordCount);
    printf("\nNumber of lines: %d\n", lineCount);
    return 0;
}
