/*
 * Kirjoita sitten ohjelma, joka lukee tiedostoa ja kirjoittaa uuden tiedoston nimeltään target.txt, jossa
kaikki pilkut on korvattu puolipisteellä.
*/
#include <stdio.h>

int main()
{
    // Luodaan muuttujat: source-tiedosto, target-tiedosto,
    FILE *source;
    FILE *target;
    char ch;
    // avataan tiedostot
    source = fopen("c:/tmp/source.txt", "r");
    target = fopen("c:/tmp/target.txt", "w");
    // Lue source-tiedostoa merkki kerrallaan KUNNES saavutetaan EOF
    while((ch = fgetc(source)) != EOF)
    {
        // JOS merkki on jotain muuta kuin pilkku
        if ( ch != ',')
        {
            // Kirjoita luettu merkki target-tiedostoon
            fputc(ch, target);
        }
        // MUUUTEN
        else
        {
            // Kirjoitetaan puolipiste
            fputc(';', target);
        }
    }
    return 0;
}
