/*
 * Tee C-kielinen ohjelma, joka kysyy käyttäjältä kuukauden ostosten euromäärän.
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
    // Luo muuttujat kuukauden ostosten euromäärälle, aleprosentille, alennetulle hinnalle
    float monthlyTotal;
    float discountedMonthlyTotal;
    int discountPercentage = 0;
    // Pyydä käyttäjää syöttämään kuukauden ostosten euromäärä
    printf("Please enter monthly total in euros: ");
    // Lue käyttäjän syöte
    scanf("%f", &monthlyTotal);
    // Tutki alennusprosentti
    // Jos yhteissumma alle 100
    if (monthlyTotal < 100 ) {
        // alennus 10%
        discountPercentage = 10;
    }
    // Jos yhteissumma alle 300
    else if ( monthlyTotal < 300 ) {
        // alennus 15%
        discountPercentage = 15;
    }
    // Jos yhteissumma alle 500
    else if ( monthlyTotal < 500 ) {
        // alennus 20%
        discountPercentage = 20;
    }
    // muuten
    else {
        // alennus 25%
        discountPercentage = 25;
    }
    // Laske lopullinen summa
    discountedMonthlyTotal = monthlyTotal - ( monthlyTotal * discountPercentage / 100);
    // Tulosta
    printf("\nYou spent a total of %.2f euros this month. \nYou get a %d %% discount. \nDiscounted price is %.2f euros.\n", monthlyTotal, discountPercentage, discountedMonthlyTotal);
    return 0;
}
