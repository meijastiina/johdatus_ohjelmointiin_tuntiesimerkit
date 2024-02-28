/*Tee ohjelma, jossa on funktio vertaile() johon viedään kaksi kokonaislukua. Tämä funktio
vertailee niiden suuruutta ja tulostaa ne suuruusjärjestyksessä näytölle (suurin ensin).
*/
#include <stdio.h>

// Prototyyppi
void vertaile(int, int);

int main()
{
    // Funktion kutsu
    vertaile(4, 8);
    return 0;
}

// Funktion määrittely
void vertaile(int number1, int number2)
{
    // Tulosta syöteparametrina saadut luvut suuruusjärjestyksessä näytölle (suurin ensin)
    // Jos number1 on suurempi
    if ( number1 > number2 )
    {
        // tulosta number1
        // tulosta number2
        printf("\n%d", number1);
        printf("\n%d", number2);
    } else {
    // muussa tapauksessa
        // tulosta number2
        // tulosta number1
        printf("\n%d", number2);
        printf("\n%d", number1);
    }
}
