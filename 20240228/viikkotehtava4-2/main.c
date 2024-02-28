/*
 * Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä lue().
Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Anna kokonaisluku”.
Tässä aliohjelmassa luetaan myös kokonaisluku ja palautetaan se pääohjelmaan, joka
tulostaa luvun näytölle
*/

#include <stdio.h>

// prototyyppi
int lue();

int main()
{
    // kutsutaan funktiota ja tulostetaan paluuarvona saatu luku näytölle
    int luku = lue();
    printf("%d", luku);
    printf("%d", lue());
    return 0;
}

/* Funktio lue()
 *  tulostaa näytölle ”Anna kokonaisluku”.
 *  luetaan kokonaisluku
 *  palautetaan luetun kokonaisluvun pääohjelmaan
 */
int lue()
{
    // luodaan muuttuja luettavalle kokonaisluvulle
    int luku;
    // tulostaa näytölle ”Anna kokonaisluku”.
    printf("\nAnna kokonaisluku: ");
    // luetaan kokonaisluku muuttujaan
    scanf("%d", &luku);
    // palautetaan luettu kokonaisluku pääohjelmaan
    return luku;
}
