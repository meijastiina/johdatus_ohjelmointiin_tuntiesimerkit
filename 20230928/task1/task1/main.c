/*
 * 1. Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä tulosta().
Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Hei maailma!”.
*/
#include <stdio.h>

// Funktion prototyyppi
void tulosta();

int main()
{
    // Kutsutaan funktiota
    tulosta();
    return 0;
}

// Funktio joka tulostaa näytölle "Hei maailma!"
void tulosta()
{
    printf("Hei maailma!\n");
}
