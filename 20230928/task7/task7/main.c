/*
 * 7. Tee ohjelma, jossa välität funktioon merkkijonon (merkkitaulukon), joka on määritelty
paikalliseksi (ei globaali) muuttujaksi. Funktiossa tämä merkkijono tulostetaan näytölle.*/

#include <stdio.h>
// Funktion prototyypit
void printString(char*);

int main()
{
    // Määritä merkkijono
    char merkkijono[] = "This is my string"; // Tämä on ok vaikka kokoa ei ole määritelty, koska arvo on asetettu
    // char toinenmerkkijono[]; Tämä ei toimi, koska kokoa ei ole määritelty, eikä arvoa asetettu
    // char kolmasmerkkijono[255]; Tämä on ok, koska maksimimerkkimäärä on asetettu

    // Kutsu funktiota
    printString(merkkijono);
    return 0;
}

// Tämä funktio tulostaa merkkijonon
void printString(char *foobar)
{
   // Tulosta merkkijono
    printf("\nMerkkijono on %s\n", foobar);
}
