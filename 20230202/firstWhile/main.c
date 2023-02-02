#include <stdio.h>

int main()
{
    // Määritä muuttujat nimi ja toistokerrat ja laskuri
    int toistokerrat;
    int laskuri = 0;
    char nimi[30];
    // Tulosta kysymys anna nimi
    printf("\nNimi: ");
    // Lue nimi muuttujaan
    scanf("%s", nimi);
    // Tulosta kysymys montako kertaa
    printf("\nToistokerrat: ");
    // Lue toistokerrat muuttujaan
    scanf("%d", &toistokerrat);
    // Tee silmukka jota kiekataan niin kauan kuin käyttäjä on käskenyt
    while ( laskuri < toistokerrat ) {
        // Tulosta nimi
        printf("\n%s", nimi);
        // Kasvata laskuria
        laskuri++;
    }
    // Tulosta otsikko
    printf("\n -- Do...while -- ");
    // Nollataan laskuri
    laskuri = 0;
    // Tee do..while-silmukka jota kiekataan niin kauan kuin käyttäjä on käskenyt
    do {
        // Tulosta nimi
        printf("\n%s", nimi);
        // Kasvata laskuria
        laskuri++;
    } while ( laskuri < toistokerrat );

    return 0;
}
