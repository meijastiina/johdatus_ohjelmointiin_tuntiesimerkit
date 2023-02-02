#include <stdio.h>

int main()
{
    /*
     * 1. Tee C-kielinen ohjelma joka tulostaa luvun 100 viisi kertaa allekkain näytölle (muista rivin
vaihto). Käytä toistorakennetta. */
    // Tulosta väliotsikko
    printf("\n----3.1 SATA VIISI KERTAA ------\n");
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
    // Tulosta väliotsikko
    printf("\n----3.2 NIMI ------\n");
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
    /*
     * Luo sovellus joka:
     *  • Kysyy käyttäjältä salanumeron
     *  • Jos salanumero on 17, sovellus onnittelee käyttäjää onnistuneesta valinnasta ja ohjelma päättyy
     *  Jos käyttäjän syöttämä numero ei ole 17, sovellus kysyy numeroa uudestaan.
     *  (Käytä whiletai do-while toistorakennetta)
    */
    // Tulosta väliotsikko
    printf("\n----3.3 SALANUMERO ------\n");
    // Luo muuttuja salanumerolle
    int secretNumber;
    do {
        // Kysy numeroa
        printf("\nSalanumero: ");
        // Scannaa numero
        scanf("%d", &secretNumber);
    } while ( secretNumber != 17 );
    // Tulosta onnittelut
    printf("Oikein meni!\n");

    /*
     * Tee ohjelma, joka tulostaa käyttäjän syöttämän kokonaisluvun kymmenen kertotaulun eli,
     * jos käyttäjä syöttää luvun 5 tulostuu seuraavaa:
     *  5*1=5
     *  5*2=10
     *  5*3=15
     *  …jne. 5*10=50 asti.
     */
    // Tulosta väliotsikko
    printf("\n----3.4 KERTOTAULU ------\n");
    // Pyydä luku
    printf("Luku: ");
    // Lue luku
    int luku;
    scanf("%d", &luku);
    // Luo silmukka
    for ( int i = 1; i <= 10; i++ ) {
        // Tulosta
        printf("\n%d * %d = %d", luku, i, luku * i);
    }
    return 0;
}
