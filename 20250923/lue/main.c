/*
 * 2. Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä lue().
Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Anna kokonaisluku”.
Tässä aliohjelmassa luetaan myös kokonaisluku ja palautetaan se pääohjelmaan, joka
tulostaa luvun näytölle.
*/
#include <stdio.h>

// aliohjelma (funktio) nimeltä lue()
int lue()
{
    // luodaan muuttuja käyttäjän syöttämälle luvulle
    int luku;
    // tulostaa näytölle ”Anna kokonaisluku”
    printf("\nAnna kokonaisluku ");
    // luetaan myös kokonaisluku
    scanf("%d", &luku);
    // palautetaan se pääohjelmaan
    return luku;
 }
int main()
{
    // kutsu aliohjelmaa lue() ja tallenna paluuarvo muuttujaan
    int numero = lue();
    // joka tulostaa luvun näytölle.
    printf("%d", numero);
    // funktiokutsun voi laittaa myös suoraan printf:n sisään
    printf("%d", lue());
    return 0;
}
