/*
 * Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä tulosta().
Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Hei maailma!”.
*/

#include <stdio.h>

// aliohjelma (funktio) nimeltä tulosta()
void tulosta()
{
    // joka tulostaa näytölle ”Hei maailma!”
    printf("Hei maailma!\n");
}

int main()
{
    // Pääohjelmasta kutsutaan em. aliohjelmaa
    tulosta();
    return 0;
}
