/*
 * Tee C-kielinen ohjelma, joka kysyy käyttäjältä kaksi lukua ja
 * tulostaa niistä suuremman.
 * Tulostusesimerkki:
 * Annoit luvut __ ja __, joista __ on suurempi.
*/
#include <stdio.h>

int main()
{
    // luo muuttujat käyttäjän syöttämille luvuille
    int number1, number2, higherNumber;
    // pyydä käyttäjää syöttämään luku1
    printf("Luku1: ");
    // lue käyttäjän syöttämä luku muuttujaan
    scanf("%d", &number1);
    // pyydä käyttäjää syöttämään luku2
    printf("Luku2: ");
    // lue käyttäjän syöttämä luku muuttujaan
    scanf("%d", &number2);
    // tutkitaan kumpi luvuista on suurempi
    if ( number1 > number2)
    {
        higherNumber = number1;

    } else {
        higherNumber = number2;

    }
    // tulosta
    printf("Annoit luvut %d ja %d, joista %d on suurempi.", number1, number2, higherNumber);
    return 0;
}
