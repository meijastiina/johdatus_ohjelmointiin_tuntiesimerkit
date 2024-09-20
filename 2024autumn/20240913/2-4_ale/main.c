/*Tee C-kielinen ohjelma, joka kysyy käyttäjältä kuukauden ostosten euromäärän.
Jos ostosten yhteissumma on alle 100€, saat alennusta ostoista 10%
Jos ostosten yhteissumma on alle 300€, saat alennusta 15%
Jos ostosten yhteissumma on alle 500€, saat alennusta 20%,
muussa tapauksessa alennus on 25%.
Laske ja tulosta ostosten lopullinen summa.
Tulostusesimerkki:
Olet ostanut tässä kuussa ___€:lla ja saat niistä alennusta
__%. Ostosten lopullinen summa on __€.
*/
#include <stdio.h>

int main()
{
    // luo float muuttujat (ostosten kokonaissumma, alennusprosentti, lopullinen alennettu summa)
    float totalMonthlyCosts, discountPercentage, finalDiscountedPrice;
    // pyydä käyttäjää syöttämään kuukauden ostosten kokonaissumman euroissa
    // lue käyttäjän syöte muuttujaan

    // Jos ostosten yhteissumma on alle 100€,
        // alennusta 10%
    discountPercentage = 10;
    // Jos ostosten yhteissumma on alle 300€,
        // alennusta 15%
    // Jos ostosten yhteissumma on alle 500€,
        // alennusta 20%,
    // muussa tapauksessa
        // alennus on 25%.

    // Laske
    // Tulosta

    return 0;
}
