/*
 * Tee ohjelma jossa on pääohjelma (main-funktio) sekä
 * yksi funktio eli aliohjelma, joka
 *      kysyy float-luvun käyttäjältä,
 *      kertoo luvun kolmella
 *      ja palauttaa tuloksen main()-funktiolle,
 * jossa tulos tulostetaan näytölle.
*/

#include <stdio.h>

// Funktion prototyyppi
float multiplyByThree();
int main()
{
    // Kutsu funktiota ja tulos tulostetaan näytölle
    printf("\nAntamasi luku kertaa kolme on %.2f", multiplyByThree());
    return 0;
}
/*
 * funktio eli aliohjelma, joka
 *      kysyy float-luvun käyttäjältä,
 *      kertoo luvun kolmella
 *      ja palauttaa tuloksen main()-funktiolle,
 * Parametrit:  -
 * Paluuarvo:   float - Luku kerrottuna kolmella
 */
float multiplyByThree()
{
    // kysyy float-luvun käyttäjältä,
    printf("\nFloat: ");
    float givenNumber;
    scanf("%f", &givenNumber);
    // kertoo luvun kolmella
    // ja palauttaa tuloksen main()-funktiolle,
    return givenNumber * 3;

}
