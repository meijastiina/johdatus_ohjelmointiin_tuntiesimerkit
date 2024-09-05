#include <stdio.h>

int main()
{
    /***************** TEHTÄVÄ 1 ****************
    // Mitä tarkoittaa muuttujan tietotyyppi?
    // Kirjoita esimerkit muuttujan määrittelystä
    // kokonaislukuna,
    *********************************************/
    // Tulosta otsikko
    printf("***************** TASK 1 ****************");
    int number1 = 0;
    number1 = 12;
    // int number1 = 0; -> VIRHE! Yritetään luoda muuttujaa nimellä joka on jo käytössä
    // liukulukuna ja
    float number2 = 1.12; // Desimaalierottimena piste, ei pilkku
    // merkkitietona.
    char character1 = 'p'; // Huom! Heittomerkit. Yksittäinen merkki

    printf("\nnumber1 value is %d", number1);
    printf("\nnumber1 address is %p", &number1);
    printf("\nnumber2 is %.3f", number2);
    printf("\ncharacter1 is %c\n", character1);


    /* ***************** TEHTÄVÄ 2 ****************
    Tee C-kielinen ohjelma, joka muuntaa antamasi lämpötilan (Celsius asteina)
    Farenheit -asteiksi.
    Tulostusesimerkki:
    Antamasi lämpötila __ on Farenheit asteina __.
    *************************************************/
    // Tulosta otsikko
    printf("***************** TASK 2 ****************");
    // Luodaan muuttujat: lämpötila celsiuksina, lämpötila fahrenheiteina
    float temperatureInCelcius;
    float temperatureInFahrenheit;
    // Pyydä käyttäjää syöttämään lämpötila celsiuksina
    printf("\n\nPlease enter temperature in Celsius: ");
    // luetaan käyttäjän syöte
    scanf("%f", &temperatureInCelcius);
    // muunnetaan celsiukset fahrenheiteiksi (0°C × 9/5) + 32
    temperatureInFahrenheit = (temperatureInCelcius * 9/5) + 32;
    // tulostetaan näytölle Antamasi lämpötila __ on Farenheit asteina __.
    printf("You entered %.1f Celsius. It is %.1f in Fahrenheit\n", temperatureInCelcius, temperatureInFahrenheit);

    /* ***************** TEHTÄVÄ 3 ****************
    Tee C-kielinen ohjelma, joka laskee suorakulmaisen kolmion alan, kun kanta=7m ja
    korkeus=4 m sekä tulostaa vastauksen.
    Tulostusesimerkki:
     Kun kolmion kanta on 7m ja korkeus 4m, on kolmion ala
    14m2.
    *************************************************/
    // Tulosta otsikko
    printf("***************** TASK 3 ****************");

    return 0; // Ohjelman suoritus päättyy tähän -> aina viimeisenä mainissa
}
