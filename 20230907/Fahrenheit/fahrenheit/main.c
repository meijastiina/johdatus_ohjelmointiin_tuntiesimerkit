/*Tee C-kielinen ohjelma, joka muuntaa antamasi lämpötilan (Celsius asteina)
Farenheit -asteiksi.
Tulostusesimerkki:
Antamasi lämpötila __ on Farenheit asteina __.
*/
#include <stdio.h>
int main()
{
    // Pyydä käyttäjää syöttämään lämpötila celsius-asteina
    printf("Please enter temperature in celsius: ");
    // Luo muuttuja johon lämpötila tallennetaan
    float temperatureInCelsius;
    // Lue käyttäjän syöte ja tallenna muuttujaan
    scanf("%f", &temperatureInCelsius);
    // Muunna celsius-asteet Fahrenheiteiksi
    float temperatureInFahrenheit = (temperatureInCelsius * 9/5) + 32;
    // Tulosta näytölle
    printf("Temperature %.2f celsius equals to %.2f Farenheit.\n", temperatureInCelsius, temperatureInFahrenheit);

    return 0;
}
