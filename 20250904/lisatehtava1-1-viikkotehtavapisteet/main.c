/* Lisätehtävät viikko 1 tehtävä 1
 * 1.1 Tehtävä 1: Viikkotehtäväarvioinnit
Kirjoita ohjelma, johon syötetään viikkokokeiden pistemäärät. Ohjelma osaa tulostaa
yksittäisten viikkokokeiden pistemäärät, yhteispistemäärän ja keskiarvon.
1. Luo kokonaislukutaulukko, jossa on viisi alkiota.
2. Pyydä käyttäjää syöttämään viikkokokeiden pistemäärät kokonaislukuina.
Tallenna nämä luomaasi taulukkoon.
3. Tulosta näytölle yksittäisten viikkokokeiden pistemäärät, kokonaispistemäärä ja
keskiarvo. Keskiarvo näytetään kahden desimaalin tarkkuudella.
*/

#include <stdio.h>

int main()
{
  // Luodaan muuttujat
  int points[5]; // kokonaislukutaulukko, johon tallennetaan viikkokokeiden pistemäärät
  int taskTotalPoints; // viikkokokeiden yhteenlaskettu pistemäärä
  // Pyydä käyttäjää syöttämään viikon yksi pistemäärä
  // ------ VIIKKO 1 ---------------
  printf("Week1 points:");
  // Lue käyttäjän syöte
  scanf("%d", &points[0]);
  // ------ VIIKKO 2 ---------------
  // Pyydä käyttäjää syöttämään viikon yksi pistemäärä
  printf("Week2 points:");
  // Lue käyttäjän syöte
  scanf("%d", &points[1]);
  // ------ VIIKKO 3 ---------------
  // Pyydä käyttäjää syöttämään viikon yksi pistemäärä
  printf("Week3 points:");
  // Lue käyttäjän syöte
  scanf("%d", &points[2]);
  // ------ VIIKKO 4 ---------------
  // Pyydä käyttäjää syöttämään viikon yksi pistemäärä
  printf("Week4 points:");
  // Lue käyttäjän syöte
  scanf("%d", &points[3]);
  // ------ VIIKKO 5 ---------------
  // Pyydä käyttäjää syöttämään viikon yksi pistemäärä
  printf("Week5 points:");
  // Lue käyttäjän syöte
  scanf("%d", &points[4]);

  // Tulosta
  printf("\nPOINTS");
  printf("\n-----------");
  printf("\nWeek 1: %d", points[0]);
  printf("\nWeek 2: %d", points[1]);
  printf("\nWeek 3: %d", points[2]);
  printf("\nWeek 4: %d", points[3]);
  printf("\nWeek 5: %d", points[4]);
  taskTotalPoints = points[0] + points[1] + points[2] + points[3] + points[4];
  printf("\nTotal points: %d", taskTotalPoints);
  printf("\nAverage points: %.2f", (float)taskTotalPoints / 5);
  return 0;
}
