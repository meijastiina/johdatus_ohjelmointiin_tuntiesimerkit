/*
 * 1. Tee C-kielinen ohjelma joka tulostaa luvun 100 viisi kertaa allekkain näytölle (muista rivin
vaihto). Käytä toistorakennetta. Muuta tämän jälkeen ohjelmaa siten, että luvut (100)
tulostuvat peräkäin vaakasuunnassa ja ne on erotettu toisistaan välilyönnillä. (Käytä whiletoistorakennetta)
*/
#include <stdio.h>

int main()
{
    // luo laskurimuuttuja
    int counter = 0;
    // toista viisi kertaa
    while ( counter < 5 )
    {
        // tulostaa luvun 100 viisi kertaa allekkain
        printf("100\n");
        // kasvatetaan laskurin arvoa yhdellä joka kiekalla
        counter++;
    }
    counter = 0;
    // toista viisi kertaa
    while ( counter < 5 )
    {
        // tulostaa luvun 100 viisi kertaa allekkain
        if ( counter == 4 )
        {
            printf("100");
        } else
        {
            printf("100 ");
        }
        // kasvatetaan laskurin arvoa yhdellä joka kiekalla
        counter++;
    }
    printf("\n*************DO..WHILE******************\n");
    counter = 0;
    // toista viisi kertaa
    do
    {
        // tulostaa luvun 100 viisi kertaa allekkain
        printf("100\n");
        // kasvatetaan laskurin arvoa yhdellä joka kiekalla
        counter++;
    } while ( counter < 5 );
    printf("\n************* FOR ******************\n");
    // toista viisi kertaa
    for ( counter = 0; counter < 5; counter++ )
    {
        // tulostaa luvun 100 viisi kertaa allekkain
        printf("100\n");
        // kasvatetaan laskurin arvoa yhdellä joka kiekalla
    }

    char foo[3];
    scanf_s("%s", foo, sizeof(foo));
    return 0;
}
