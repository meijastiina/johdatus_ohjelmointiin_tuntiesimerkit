/*
 * Tee C-kielinen ohjelma, joka muuntaa antamasi lämpötilan (Celsius asteina)
Farenheit -asteiksi.
Tulostusesimerkki:
Antamasi lämpötila __ on Farenheit asteina __.
*/
#include <stdio.h>

int main()
{
  // luo muuttuja johon tallennetaan käyttäjän antama lämpötila (c)
  float temperatureInCelcius;
  // Tulosta näytölle teksti, jossa pyydetään käyttäjää syöttämään lämpötila (c)
  printf("Temperature in celsius: ");
  // lue käyttäjän syöte ja tallenna muuttujaan
  scanf("%f", &temperatureInCelcius);
  // tulosta näytölle annettu lämpötila fahrenheiteina
  printf("Temperature %.1f C is __ in Fahrenheit", temperatureInCelcius);
  return 0;
}
