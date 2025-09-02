/*
 * Tässä on esimerkkikoodit luennolta 01.09.2025
 * Tekijä: Meija Lohiniva
 */

#include <stdio.h> // Tämä on käsky esiprosessorille

int main()
{
  int number1 = 12;
  int number2;
  number2 = 34;
  printf("\nHello World! Today is %dst of September %d\n", 1, 2025);

  printf("\nNumber1 value is %d and number2 value is %d.", number1, number2);

  // Pyydä käyttäjää syöttämään luku
  printf("\nPlease enter a number: ");
  // Luodaan muuttuja johon syöte tallennetaan
  int numberFromUser;
  // Tallenna käyttäjältä saatu luku muuttujaan
  scanf("%d", &numberFromUser);
  // Tulosta näytölle
  printf("You entered %d", numberFromUser);

  int luku1, luku2;
  // Pyydä käyttäjältä luku1
  printf("\n\n\nEnter number 1: ");
  scanf("%d", &luku1);
  // Pyydä käyttäjältä luku2
  printf("\nEnter number 2: ");
  scanf("%d", &luku2);
  // Tulosta lukujen summa
  printf("%d + %d = %d", luku1, luku2, luku1 + luku2);

  // Luo tarvittavat muuttujat
  int numberOfCandies, numberOfKids;
  // Pyydä käyttäjältä karkkien lukumäärä
  printf("\nEnter number of candies: ");
  scanf("%d", &numberOfCandies);

  // Pyydä käyttäjältä lasten lukumäärä
  printf("\nEnter number of kids: ");
  scanf("%d", &numberOfKids);

  // Tulosta näytölle
  printf("Number of candies for each kid: %d", numberOfCandies / numberOfKids);
  printf("\nNumber of candies left: %d", numberOfCandies % numberOfKids);

  return 0;
}
