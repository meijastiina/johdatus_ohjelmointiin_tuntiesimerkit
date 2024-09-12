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
    // luo muuttujat ostostenSumma, lopullinenSumma, alennusProsentti
    float ostostenSumma;
    float lopullinenSumma;
    float alennusProsentti;
    // kysytään käyttäjältä ostosten summa
    printf("Total amount of monthly costs: ");
    scanf("%f", &ostostenSumma);

    // Tutki paljonko alennusta myönnetään
    // Jos ostosten yhteissumma on alle 100€
    if ( ostostenSumma < 100 ) {
        // saat alennusta ostoista 10%
        alennusProsentti = 10;
    } else if ( ostostenSumma < 300 ) {
    // Jos ostosten yhteissumma on alle 300€
        // saat alennusta 15%
        alennusProsentti = 15;
    } else if ( ostostenSumma < 500 ) {
    // Jos ostosten yhteissumma on alle 500€
        // saat alennusta 20%,
        alennusProsentti = 20;
    // muussa tapauksessa
    } else {
        // alennus on 25%.
        alennusProsentti = 25;
    }
    // Lasketaan alennettu hinta
    //Lukua voidaan pienentää eli alentaa tietyllä prosentilla kertomalla se lukemalla 1 miinus prosenttiluku desimaalimuodossa. Esimerkki: Hintaa 50€ alennetaan 20%. 50€*(1-0,20) = 50*0,80 = 40. Vaihtoehtoisesti laske ensin 20% luvusta 50 ja sitten vähennä tulos alkuperäisestä hinnasta.
    lopullinenSumma = ostostenSumma * ( 1 - (alennusProsentti / 100) );
    // Tulosta
    printf("\nYou have spent %.2f euros this month and will get a %.0f%% discount. Final discounted sum is %.2f euros.", ostostenSumma, alennusProsentti, lopullinenSumma);
    return 0;
}
