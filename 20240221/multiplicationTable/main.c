/*
 * 4. Tee ohjelma, joka tulostaa käyttäjän syöttämän kokonaisluvun kymmenen kertotaulun eli,
jos käyttäjä syöttää luvun 5 tulostuu seuraavaa:
5*1=5
5*2=10
5*3=15
…jne. 5*10=50 asti.
*/
#include <stdio.h>

int main()
{
    // Luodaan muuttujat
    int number;

    // Pyydä käyttäjää syöttämään kokonaisluku
    printf("\nNumber: ");
    // Tallenna käyttäjän syöttämä luku muuttujaan
    scanf("%d", &number);
    // Tulosta syötetyn luvun kymmenen kertotaulu
    // Toistetaan 1-10
    for ( int multiplier = 1; multiplier <= 10; multiplier++ ) {
        printf("\n%d * %d = %d\n", number, multiplier, number * multiplier);
    }
    return 0;
}
