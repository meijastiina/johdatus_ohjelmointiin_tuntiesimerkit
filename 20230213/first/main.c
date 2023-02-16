/* Tee ohjelma, jossa välität funktioon merkkijonon (merkkitaulukon), joka on määritelty
paikalliseksi (ei globaali) muuttujaksi. Funktiossa tämä merkkijono tulostetaan näytölle
*/
#include <stdio.h>

// Funktion prototyyppi
void printString(char*);

int main()
{
    printString("Hello World testing!\n");
    return 0;
}

// Funktion toteutus
void printString(char *text)
{
    // Funktion body
    // Funktiossa syötteenä saatu merkkijono tulostetaan näytölle
    printf("%s", text);
}
