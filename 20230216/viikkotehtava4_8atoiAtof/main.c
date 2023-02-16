/*
 * Tee ohjelma, joka
 *  lukee käyttäjän syöttämän kokonaisluvun (int)
 *  ja desimaaliluvun (double) char-taulukkoon.
 *
 * Sitten ohjelma summaa luvut ja tulostaa näyttöön.
 *
 * (Käytä <stdlib.h> kirjaston atoi()- ja atof()-funktioita,
 * jotka muuttavat merkkijonon luvuksi
 * int luku=atoi(merkkijono); //muuntaa merkkijonon kokonaisluvuksi
 * double luku2=atof(merkkijono); //muuntaa merkkijonon double luvuksi)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Määritellään muuttujat mihin käyttäjän syöttämät luvut tallennetaan
    char enteredInt[5], enteredDouble[10];
    double sum, enteredDoubleAsDouble;
    int enteredIntAsInt;

    // lue käyttäjän syöttämä kokonaisluku (int) char-taulukkoon.
    printf("\nEnter integer: ");
    scanf("%s", &enteredInt);
    // lue  käyttäjän syöttämä desimaaliluku (double) char-taulukkoon.
    printf("\nEnter double: ");
    scanf("%s", &enteredDouble);

    // Muunna merkkijonot numeerisiksi
    enteredIntAsInt = atoi(enteredInt);
    enteredDoubleAsDouble = atof(enteredDouble);
    // Sitten ohjelma summaa luvut
    sum = enteredIntAsInt + enteredDoubleAsDouble;

    // tulostaa näyttöön.
    printf("\nEntered integer: %s", enteredInt);
    printf("\nEntered double: %s", enteredDouble);
    printf("\nSum: %.2f\n", sum);
    return 0;
}
