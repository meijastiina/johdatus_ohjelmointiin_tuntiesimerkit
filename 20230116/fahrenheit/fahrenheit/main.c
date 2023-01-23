#include <stdio.h>

int main()
{
    // Luo muuttuja syötetylle lämpötilalle
    float temperatureInCelsius;
    // Pyydä käyttäjää syöttämään lämpötila
    printf("\nPlease enter temperature in Celsius: ");
    // Lue käyttäjän syöte muuttujaan
    scanf("%f", &temperatureInCelsius);
    // Muunna annettu lämpötila (celsius) Fahrenheitiksi
    // celsius * 1.8 + 32
    float temperatureInFahrenheit = temperatureInCelsius * 1.8 + 32;
    // Tulosta vastaus
    printf("Temperature you entered (%.1f) equals %.1f Fahrenheit", temperatureInCelsius, temperatureInFahrenheit);
    return 0;
}
