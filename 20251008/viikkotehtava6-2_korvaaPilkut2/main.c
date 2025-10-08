/*
 * lukee tiedostoa ja kirjoittaa uuden tiedoston nimeltään target.txt, jossa
kaikki pilkut on korvattu puolipisteellä.
*/
#include <stdio.h>

int main()
{
    // Luodaan muuttujat: source-tiedosto, target-tiedosto
    FILE *source;
    FILE *target;
    char ch;
    // Avataan tiedostot
    source = fopen("c:/tmp/source.txt", "r");
    target = fopen("c:/tmp/target.txt", "w");
    // Lue source-tiedostoa merkki kerrallaan KUNNES tulee EOF
    while((ch = fgetc(source)) != EOF)
    {
        // JOS luettu merkki on ,
        if (ch == ',')
        {
            // kirjoita ; tiedostoon
            fprintf(target, ";");
        }
        else
        {
        // MUUTEN
            // kirjoita luettu merkki tiedostoon
            	fprintf(target, "%c", ch);
        }
    }
    // Sulje tiedostot
    return 0;
}
