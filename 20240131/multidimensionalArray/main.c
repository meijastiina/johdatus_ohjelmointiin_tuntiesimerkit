/*
 * Tee C-kielinen ohjelma, joka alustaa 3*3 kokoisen taulukon haluamillasi
kokonaisluvuilla. Taulukosta tulostetaan kolme lukua, niin että ensimmäisenä
tulostuu ensimmäisen rivin 3. luku, toisena tulostuu toisen rivin 2. luku ja viimeisenä
tulostuu kolmannen rivin 1. luku.
Tulostusesimerkki:
Taulukon 1. rivin luku on __
Taulukon 2. rivin luku on __
Taulukon 3. rivin luku on __
*/
#include <stdio.h>

int main()
{
    // alusta 3*3 kokoisen taulukon haluamillasi kokonaisluvuilla
    //      0   1   2
    // 0    5   8   9
    // 1    11  12  13
    // 2    1   2   3
    int numbers[3][3] = {
        { 5, 8, 9 },
        { 11, 12, 13 },
        { 1, 2, 3 }
    };
    // ensimmäisenä tulostuu ensimmäisen rivin 3. luku
    printf("\nTaulukon 1. rivin luku on %d", numbers[0][2]);
    return 0;
}
