/*
 * Tee ohjelma, jossa välität funktioon merkkijonon (merkkitaulukon), joka on määritelty
paikalliseksi (ei globaali) muuttujaksi. Funktiossa tämä merkkijono tulostetaan näytölle.
*/
#include <stdio.h>

// Funktion prototyyppi
void tulostaMerkkijono(char *merkkijono);
int main()
{
    tulostaMerkkijono("Hello tulostaMerkkijono!");
    return 0;
}

/* Funktio joka tulostaa parametrina saadun merkkijonon näytölle
 * Parametrit:  merkkijono
 * Paluuarvo:   -
 */
void tulostaMerkkijono( char *merkkijono ) {
    // Tulosta merkkijono
    printf("\n%s", merkkijono);
}
