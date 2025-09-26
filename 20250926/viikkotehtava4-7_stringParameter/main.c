/*
 * Tee ohjelma, jossa välität funktioon merkkijonon (merkkitaulukon), joka on määritelty
paikalliseksi (ei globaali) muuttujaksi. Funktiossa tämä merkkijono tulostetaan näytölle.
*/

#include <stdio.h>

// Funktio joka tulostaa parametrina saadun merkkijonon
// Parametrit:  char[] tulostettava merkkijono
// Paluuarvo:   void
//
void printString(char * name)
{
    printf("%s", name);
}


int main()
{
    char name[] = "John";
    printString(name);
    return 0;
}
