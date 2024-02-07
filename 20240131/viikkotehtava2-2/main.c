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
    if ( number1 > number2) {
        // number1 on suurempi kuin number2
        printf("\nAnnoit luvut %d ja %d, joista %d on suurempi.", number1, number2, number1);
    } else {
        // number2 on suurempi kuin number1
        printf("\nAnnoit luvut %d ja %d, joista %d on suurempi.", number1, number2, number2);
    }
    // Ternäärioperaattori
    // ehto ? mitä tehdään jos ehto on tosi : mitä tehdään jos ehto ei ole tosi
    printf("\nAnnoit luvut %d ja %d, joista %d on suurempi.", number1, number2,  number1 > number2 ? number1 : number2 );
    return 0;
}
