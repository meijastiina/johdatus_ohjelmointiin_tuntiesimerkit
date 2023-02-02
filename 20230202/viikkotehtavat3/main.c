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

    /*
     * Tee C-kielinen ohjelma joka lukee kysyy käyttäjän nimen ja sen montako kertaa se tulostetaan näytölle. Sitten tulostaa nimen näytölle em. kertaa. Tee ratkaisu
        a) while toistolla
        b) do-while toistolla
        c) for-toistolla
(HUOM! voit tehdä, jos haluat a)-c) kohdat samaan ohjelmaan peräkkäin näin sinun ei
tarvitse tehdä kolmea erillistä ohjelmaa)
*/
    // Luodaan muuttuja nimelle
    char nimi[15];
    // Luodaan muuttuja toistokerroille
    int toistokerrat;
    // Pyydä nimi
    printf("\nNimi: ");
    // Lue nimi
    scanf("%s", nimi);
    // Pyydä toistokerrat
    printf("Toistokerrat: ");
    // Lue toistokerrat
    scanf("%d", &toistokerrat);
    // Toista niin monta kertaa kuin pyydettiin
    for ( int i = 0; i < toistokerrat; i++ ) {
        // Tulosta nimi
        printf("\n%s", nimi);
    }
    return 0;
}
