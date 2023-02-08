/*
 * Tee ohjelma, jossa on funktio vertaile() johon viedään kaksi kokonaislukua. Tämä funktio
 * vertailee niiden suuruutta ja tulostaa ne suuruusjärjestyksessä näytölle (suurin ensin).
*/
#include <stdio.h>

// Funktion prototyyppi
void vertaile(int number1, int number2);

int main()
{
    // Kutsutaan funktiota vertaile
    vertaile(22, 8);
    return 0;
}

/*
 * funktio vertaile() johon viedään kaksi kokonaislukua. Tämä funktio
 * vertailee niiden suuruutta ja tulostaa ne suuruusjärjestyksessä näytölle (suurin ensin).
 * Parametrit:  int number1
 *              int number2
 * Paluuarvo:   void (none)
 */
void vertaile(int number1, int number2)
{
    // vertaile annettujen lukujen suuruutta
    if ( number1 < number2 )
    {
        // number1 on pienempi
        // Tulosta suuruusjärjestyksessä näytölle (suurin ensin)
        printf("\n%d %d", number2, number1);
    } else
    {
        printf("\n%d %d", number1, number2);
    }
}
