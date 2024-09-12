/*
 * Tee C-kielinen ohjelma, joka alustaa 3*3 kokoisen taulukon haluamillasi
 * kokonaisluvuilla. Taulukosta tulostetaan kolme lukua, niin että ensimmäisenä
 * tulostuu ensimmäisen rivin 3. luku, toisena tulostuu toisen rivin 2. luku ja
 * viimeisenä tulostuu kolmannen rivin 1. luku.
 * Tulostusesimerkki:
 * Taulukon 1. rivin luku on __
 * Taulukon 2. rivin luku on __
 * Taulukon 3. rivin luku on __
 */

#include <stdio.h>
int main()
{
    // alusta 3*3 kokoisen taulukon haluamillasi kokonaisluvuilla
    // 5 4 8
    // 7 0 9
    // 0 1 6
    int numbersArray[3][3] = {{6, 4, 8}, {7, 0, 9}, {0, 1, 6}};
    numbersArray[0][0] = 5;
    // ensimmäisenä tulostuu ensimmäisen rivin 3. luku
    printf("\nTaulukon 1. rivin luku on %d", numbersArray[0][2]);
    // toisena tulostuu toisen rivin 2. luku
    printf("\nTaulukon 2. rivin luku on %d", numbersArray[1][1]);
    // viimeisenä tulostuu kolmannen rivin 1. luku.
    printf("\nTaulukon 3. rivin luku on %d", numbersArray[2][0]);
    return 0;
}
