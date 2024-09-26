/*
 * Tee ohjelma, jossa on pääohjelma (main-funktio) ja aliohjelma (funktio) nimeltä lue().
 * Pääohjelmasta kutsutaan em. aliohjelmaa, joka tulostaa näytölle ”Anna kokonaisluku”.
 * Tässä aliohjelmassa luetaan myös kokonaisluku ja palautetaan se pääohjelmaan, joka tulostaa luvun näytölle.
*/
#include <stdio.h>
// funktion prototyyppi
int readNumber();

int main()
{
    // kutsutaan funktiota
    // tulosta palautettu luku näytölle
    int number = readNumber(); // tallennetaan funktiolta paluuarvona saatu luku muuttujaan
    printf("%d", number);

    return 0;
}

int readNumber()
{
    // luodaan muuttuja kokonaisluvulle
    int number;
    // tulostaa näytölle ”Anna kokonaisluku”
    printf("Number: ");
    // lue käyttäjän syöte
    scanf("%d", &number);
    // palautetaan number-muuttujan arvo kutsujalle
    return number;
}
