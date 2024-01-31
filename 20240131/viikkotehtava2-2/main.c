/*Tee C-kielinen ohjelma, joka kysyy käyttäjältä kaksi lukua ja tulostaa niistä
suuremman.
Tulostusesimerkki:
Annoit luvut __ ja __, joista __ on suurempi.
*/

#include <stdio.h>

int main()
{
    // luodaan muuttujat
    int number1, number2;
    // kysy käyttäjältä luku1
    printf("\nEnter first number: ");
    scanf("%d", &number1);
    // kysy käyttäjältä luku2
    printf("\nEnter second number: ");
    scanf("%d", &number2);
    // tulostaa niistä suuremman
    printf("\nAnnoit luvut %d ja %d, joista __ on suurempi.", number1, number2);
    return 0;
}
