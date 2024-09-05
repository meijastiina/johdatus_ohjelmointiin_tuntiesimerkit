// Käsky esiprosessorille (#), että sisällytetään kirjasto stdio
#include <stdio.h>

// Pääohjelma (main) alkaa. Ohjelman suoritus alkaa tästä
int main()
{
    /******* TASK 1 ****************
     * Mitä tarkoittaa muuttujan tietotyyppi?
     * Kirjoita esimerkit muuttujan määrittelystä
     * kokonaislukuna, liukulukuna ja merkkitietona.
     * ***************************/
    // Tulosta otsikko
    printf("****** TASK 1 ****************");
    // luo kokonaislukumuuttuja
    int number1 = 5;
    // luo liukulukumuuttuja
    float number2;
    number2 = 2.15; // desimaalierotin on piste
    // luo merkkitietomuuttuja
    char character1 = 'c';

    // Tulostetaan muuttujat
    printf("\nnumber1 value is %d\n", number1);
    printf("\nnumber2 value is %.2f\n", number2);
    printf("\ncharacter1 value is %c\n", character1);

    /******* TASK 2 ****************
     * Tee C-kielinen ohjelma, joka muuntaa antamasi
     * lämpötilan (Celsius asteina)
     * Farenheit -asteiksi.
     * Tulostusesimerkki:
     * Antamasi lämpötila __ on Farenheit asteina __.
     * ***************************/
    // Tulosta otsikko
    printf("\n****** TASK 2 ****************\n");
    // luo muuttujat
    float temperatureInCelcius;
    float temperatureInFahrenheit;
    // pyydä käyttäjää syöttämään lämpötila celsius asteina
    printf("Temperature in Celsius: ");
    // lue käyttäjän syöte (tallenna muuttujaan)
    scanf("%f", &temperatureInCelcius);
    // muunna annettu lämpötila Fahrenheiteiksi (0°C × 9/5) + 32 = 32°F
    temperatureInFahrenheit = (temperatureInCelcius * 9/5) + 32;
    // tulosta
    printf("Temperature you entered (%.1f C) is %.1f in Fahrenheit.", temperatureInCelcius, temperatureInFahrenheit);

    // Päättää ohjelman suorituksen
    return 0;
}
