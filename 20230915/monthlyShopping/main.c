/*
 * Tee C-kielinen ohjelma, joka kysyy k‰ytt‰j‰lt‰ kuukauden ostosten eurom‰‰r‰n.
Jos ostosten yhteissumma on alle 100Ä, saat alennusta ostoista 10%
Jos ostosten yhteissumma on alle 300Ä, saat alennusta 15%
Jos ostosten yhteissumma on alle 500Ä, saat alennusta 20%,
muussa tapauksessa alennus on 25%.
Laske ja tulosta ostosten lopullinen summa.
Tulostusesimerkki:
Olet ostanut t‰ss‰ kuussa ___Ä:lla ja saat niist‰ alennusta
__%. Ostosten lopullinen summa on __Ä.
*/
#include <stdio.h>

int main()
{
    // Luo muuttujat kuukauden ostosten eurom‰‰r‰lle, aleprosentille, alennetulle hinnalle
    float monthlyTotal;
    float discountedMonthlyTotal;
    int discountPercentage = 0;
    // Pyyd‰ k‰ytt‰j‰‰ syˆtt‰m‰‰n kuukauden ostosten eurom‰‰r‰
    printf("Please enter monthly total in euros: ");
    // Lue k‰ytt‰j‰n syˆte
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
