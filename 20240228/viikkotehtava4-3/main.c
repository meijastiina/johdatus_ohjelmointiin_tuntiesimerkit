/*
 * Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä lue().
Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Anna kokonaisluku”.
Tässä aliohjelmassa luetaan myös kokonaisluku ja palautetaan se pääohjelmaan, joka
tulostaa luvun näytölle

Muuta edellistä ohjelmaa siten, että lisäät siihen luvunTulostus() nimisen aliohjelman. Tätä
aliohjelmaa kutsutaan pääohjelmasta (sitten, kun luku on luettu) ja siihen välitetään luettu
kokonaisluku. luvunTulostus() aliohjelma tulostaa siihen välitetyn luvun näytölle.

*/

#include <stdio.h>

// prototyyppi
int lue();
void luvunTulostus(int luku);

int main()
{
    // kutsutaan funktioita
    int luku = lue();
    luvunTulostus(luku);
    luvunTulostus(lue());
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

/* Funktio luvunTulostus()
 *  tulostaa välitetyn luvun näytölle
 */
void luvunTulostus(int luku)
{
    printf("%d", luku);
}
