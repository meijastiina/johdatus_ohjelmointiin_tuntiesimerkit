/*
 * Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä lue().
 * Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Anna kokonaisluku”.
 * Tässä aliohjelmassa luetaan myös kokonaisluku ja palautetaan se pääohjelmaan, joka
 * tulostaa luvun näytölle.
*/
#include <stdio.h>

// Funktion prototyyppi
int lue();

int main()
{
    // Pääohjelmasta kutsutaan em. aliohjelmaa
    // tulostaa funktion palauttaman luvun näytölle
    printf("%d\n", lue());
    return 0;
}

int lue()
{
    // tulostaa näytölle ”Anna kokonaisluku”
    printf("Anna kokonaisluku: ");
    // Tässä aliohjelmassa luetaan myös kokonaisluku
    int number;
    scanf("%d", &number);
    // palautetaan luettu kokonaisluku pääohjelmaan
    return number;
}
