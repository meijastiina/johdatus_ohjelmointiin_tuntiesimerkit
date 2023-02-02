#include <stdio.h>

int main()
{
    /*
     * 1. Tee C-kielinen ohjelma joka tulostaa luvun 100 viisi kertaa allekkain näytölle (muista rivin
vaihto). Käytä toistorakennetta. */
    // Luodaan muuttuja silmukkaa varten
    int i = 0;
    // Luodaan silmukka, jota toistetaan viisi kertaa
    while ( i <= 4 ) {
        // Tulostetaan luku sata
        printf("100\n");
        i++;
    }

    /* Muuta tämän jälkeen ohjelmaa siten, että luvut (100) tulostuvat peräkäin vaakasuunnassa ja ne on erotettu toisistaan välilyönnillä. (Käytä whiletoistorakennetta)
    */
    // Nollataan laskuri
    i = 0;
    // Luodaan silmukka, jota toistetaan viisi kertaa
    while ( i <= 4 ) {
        // Tulostetaan luku sata
        printf("100 ");
        i++;
    }
    return 0;
}
