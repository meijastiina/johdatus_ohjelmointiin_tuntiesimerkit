/*
 * Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä tulosta().
 * Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Hei maailma!”.
*/
#include <stdio.h>

// Function prototype
void tulosta();

int main()
{
    tulosta();
    return 0;
}

/* Aliohjelma (funktio) nimeltä tulosta(), joka tulostaa näytölle ”Hei maailma!”
 * Parametrit:  -
 * Paluuarvo:   -
 */
void tulosta()
{
    printf("Hei maailma!");
}
