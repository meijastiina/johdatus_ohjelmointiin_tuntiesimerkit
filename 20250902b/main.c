/*
 * Tee C-kielinen ohjelma, joka muuntaa antamasi lämpötilan (Celsius asteina)
 * Farenheit -asteiksi.
 * Tulostusesimerkki:
 * Antamasi lämpötila __ on Farenheit asteina __.
*/
#include <stdio.h>

int main()
{
  // Luodaan muuttujat
  int temperatureInCelcius;
  // Tulostetaan käyttäjälle pyyntö syöttää lämpötila celsius-asteina
  printf("Temperature in celsius: \n");
  // Luetaan käyttäjän syöte muuttujaan
  scanf("%d", &temperatureInCelcius);
  // Muutetaan celsiukset fahrenheiteiksi. Kaava: celsius * 1,8 + 32
  float temperatureInFarenheit = temperatureInCelcius * 1.8 + 32;
  // Tulostetaan näytölle lopputulos.
  printf("%d Celsius is %.1f in Farenheit", temperatureInCelcius, temperatureInFarenheit);
  return 0;
}
