/*
 * Tee C-kielinen ohjelma, joka kysyy käyttäjältä kuukauden ostosten euromäärän.
 * Jos ostosten yhteissumma on alle 100€, saat alennusta ostoista 10%
 * Jos ostosten yhteissumma on alle 300€, saat alennusta 15%
 * Jos ostosten yhteissumma on alle 500€, saat alennusta 20%, muussa tapauksessa alennus on 25%.
 * Laske ja tulosta ostosten lopullinen summa.
 * Tulostusesimerkki:
 *  Olet ostanut tässä kuussa ___€:lla ja saat niistä alennusta__%. Ostosten lopullinen summa on __€.
*/
#include <stdio.h>

int main()
{
    // luodaan tarvittavat muuttujat
    float monthlyTotal, discountPercent, discountedPrice;

    // kysy käyttäjältä kuukauden ostosten euromäärä
    printf("Please enter monthly total in euros: \n");
    // lue käyttäjän syöte
    scanf( "%f", &monthlyTotal );
    // tarkista mihin alennuskategoriaan kuuluu
    // Alennetun hinnan laskemiskaava discounted price = original price - (original price × discount / 100).
    if ( monthlyTotal < 100 ) {
        // Alennusprosentti on 10
        discountPercent = 10;
        discountedPrice = monthlyTotal - ( monthlyTotal * discountPercent / 100 );
    } else if ( monthlyTotal < 300 ) {

    }
    // Tulostetaan
    printf("\nYou have spent %.2f euros this month and you will get %.0f %% discount. Discounted price is %.2f euros.\n\n", monthlyTotal, discountPercent, discountedPrice);
    return 0;
}
