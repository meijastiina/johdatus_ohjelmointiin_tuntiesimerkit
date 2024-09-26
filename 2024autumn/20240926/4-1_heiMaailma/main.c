/*
 * 1. Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä tulosta().
Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Hei maailma!”.
*/

#include <stdio.h>
// funktion prototyyppi
void printHello();


int main()
{
    printHello();
    return 0;
}


// aliohjelma, joka tulostaa näytölle ”Hei maailma!”
void printHello()
{
    // funktion toteutus
    printf("Hello World!\n");
}
