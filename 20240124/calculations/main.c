/*  Tee C-kielinen ohjelma, joka kysyy käyttäjältä kaksi kokonaislukua ja tulostaa ensin
syötetyt luvut, sitten niiden summan, erotuksen ja tulon kokonaislukuna omille
riveilleen sekä osamäärän desimaalilukuna kahden desimaalin tarkkuudella.
Tulostusesimerkki:
Syötetyt luvut olivat __ ja __.
Lukujen summa on __.
Lukujen erotus __.
Lukujen tulo __.
Lukujen osamäärä __.
*/

#include <stdio.h>

int main()
{
    // Luodaan muuttujat
    int number1, number2;
    int sum;
    // Pyydä käyttäjää syöttämään number1
    printf("\nNumber1: ");
    // Lue number1 muuttujaan
    scanf("%d", &number1);
    // Pyydä käyttäjää syöttämään number2
    printf("\nNumber2: ");
    // Lue number2 muuttujaan
    scanf("%d", &number2);
    // Laske lukujen summa
    sum = number1 + number2;
    // Tulostetaan
    // Syötetyt luvut olivat __ ja __.
    printf("\nEntered numbers are %d and %d.", number1, number2);
    //Lukujen summa on __.
    printf("\nSum is %d", sum);
    return 0;
}
