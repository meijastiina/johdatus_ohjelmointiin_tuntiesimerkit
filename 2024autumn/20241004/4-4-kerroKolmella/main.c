/*
 * Tee ohjelma jossa on pääohjelma (main-funktio) sekä yksi funktio eli aliohjelma,
 * joka kysyy float-luvun käyttäjältä,
 * kertoo luvun kolmella ja palauttaa tuloksen main()-funktiolle,
 * jossa tulos tulostetaan näytölle.
*/
#include <stdio.h>

// funktion prototyyppi
float multiplyByThree();

int main()
{
    // kutsu funktiota
    float result = multiplyByThree();
    // tulosta funktion paluuarvo
    printf("\nResult is %.2f", result);

    printf("\nResult is %.2f", multiplyByThree());
    return 0;
}
/*
 * Funktio multiplyByThree
 * Parametrit: -
 * Paluuarvo: float result
 */
// paluuarvon_tietotyyppi funktion_nimi(parametrit)
float multiplyByThree()
{
    // luodaan muuttuja
    float number;
    float result;
    // kysyy float-luvun käyttäjältä
    printf("\nEnter number: ");
    scanf("%f", &number);
    // kertoo luvun kolmella
    result = number *3;
    // palauttaa tuloksen main()-funktiolle
    return result;
}
