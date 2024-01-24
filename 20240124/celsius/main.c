/*
 * Tee C-kielinen ohjelma, joka muuntaa antamasi lämpötilan (Celsius asteina)
 * Farenheit -asteiksi.
 * Tulostusesimerkki:
 * Antamasi lämpötila __ on Farenheit asteina __
*/
#include <stdio.h>

int main()
{
    // Määritellään muuttuja lämpötilalle
    float temperatureInCelsius;
    float temperatureInFahrenheit;
    // Pyydetään käyttäjää syöttämään lämpötila
    printf("Enter temperature in Celsius: ");
    // Luetaan käyttäjän syöttämä lämpötila muuttujaan
    scanf("%f", &temperatureInCelsius);
    // Muuta lämpötila Fahrenheiteiksi
    // F = (°C × 9/5) + 32
    temperatureInFahrenheit = (temperatureInCelsius * 9/5) + 32;
    // Tulosta "Antamasi lämpötila __ on Farenheit asteina __"
    printf("The temperature entered %.2f °C is %.2f Fahrenheit.", temperatureInCelsius, temperatureInFahrenheit);
    return 0;
}
