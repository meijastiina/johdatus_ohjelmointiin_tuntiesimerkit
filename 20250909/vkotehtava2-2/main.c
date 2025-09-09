/*
 * Tee C-kielinen ohjelma, joka kysyy käyttäjältä kaksi lukua ja tulostaa niistä
 * suuremman.
 * Tulostusesimerkki:
 * Annoit luvut __ ja __, joista __ on suurempi.
*/
#include <stdio.h>

int main()
{
  // Luo muuttujat luvuilla
  int number1, number2;
  // Pyydä käyttäjää syöttämään kaksi lukua
  printf("Please enter two numbers separated by a space\n");
  // Lue käyttäjän syötteet muuttujiin
  scanf("%d %d", &number1, &number2);
  if ( number1 < number2 )
  {
    printf("Annoit luvut %d ja %d, joista %d on suurempi.", number1, number2, number2);
  } else {
    printf("Annoit luvut %d ja %d, joista %d on suurempi.", number1, number2, number1);
  }
  // sama toteutettuna ternäärioperaattorilla
  // esimerkki: printf( age < 18 ? "You're a minor" : "You're an adult");
  printf("Annoit luvut %d ja %d, joista %d on suurempi.", number1, number2, number1 < number2 ? number2 : number1);
  return 0;
}
