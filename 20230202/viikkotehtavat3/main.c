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
    // Tulosta väliotsikko
    printf("\n----3.4 BONUS / KAIKKI KERTOTAULUT ------\n");
    // Luo ulompi silmukka
    for ( int kertotaulu = 1; kertotaulu <= 10; kertotaulu++) {
        // Luo sisempi silmukka
        for ( int i = 1; i <= 10; i++ ) {
            // Tulosta
            printf("\n%d * %d = %d", kertotaulu, i, kertotaulu * i);
        }
    }
    /*
     * . Tee ohjelma, joka lukee käyttäjältä kokonaisluvun.
     * Sitten ohjelma summaa tähän lukuun asti kaikkien parillisten lukujen arvot ja tulostaa summan näytölle.
     * (HUOM luku%2 jakojäännös on nolla parillisilla luvuilla)
     * (Jos käyttäjä syöttää luvun 8 niin ohjelma tulostaa luvun 20 (0+2+4+6+8)
     */
    // Tulosta väliotsikko
    printf("\n----3.5 PARILLISTEN LUKUJEN SUMMA ------\n");
    // Luo muuttujat
    int numero, summa = 0;
    // Pyydä luku
    printf("\nNumero: ");
    // Lue luku
    scanf("%d", &numero);
    // Silmukka
    for ( int i = 0; i <= numero; i++ ) {
        // Tarkista onko parillinen
        if ( i % 2 == 0 ) {
            // Parillinen luku lisätään summa-muuttujan arvoon
            summa += i;
        }
    }
    // Tulostetaan lopuksi summa
    printf("\n%d", summa);

    /* Tee ohjelma joka tulostaa käyttäjälle seuraavan valikon, jossa on kolme vaihtoehtoa:
     *  1. Neliön kehän pituus
     *  2. Ympyrän kehän pituus
     *  9. Lopetus.
     * Käyttäjä voi valita halutun toiminnan syöttämällä 1,2 tai 9.
     * Valinta 1 saa aikaan tulostuksen ”Valittu Neliön kehän pituus”,
     * valinta 2 saa aikaan tulostuksen ”Valittu Ympyrän kehän pituus”.
     * Em. tulostuksien jälkeen valikko tulostetaan aina uudelleen.
     * Valinta 9 lopettaa ohjelman. (Käytä while-toistorakennetta)
    */
    // Luodaan muuttuja käyttäjän valinnalle
    int choice;
    // Tee silmukka, jota toistetaan niin kauan kunnes annetaan 9
    while ( choice != 9 ) {
        // Tulosta valikko
        printf("\n1. Neliön kehän pituus");
        printf("\n2. Ympyrän kehän pituus");
        printf("\n9. Lopetus\n");
        // Lue valinta
        scanf("%d", &choice);
    }
    return 0;
}
