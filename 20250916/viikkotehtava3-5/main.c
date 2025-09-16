/*
 * Tee ohjelma, joka lukee käyttäjältä kokonaisluvun. Sitten ohjelma summaa tähän lukuun asti
kaikkien parillisten lukujen arvot ja tulostaa summan näytölle. (HUOM luku%2 jakojäännös
on nolla parillisilla luvuilla) (Jos käyttäjä syöttää luvun 8 niin ohjelma tulostaa luvun 20
(0+2+4+6+8)
*/
#include <stdio.h>

int main()
{
    // luo muuttujat
    int enteredNumber;
    int i = 0;
    int sum = 0;
    printf("Enter number: ");
    scanf("%d", &enteredNumber);
    while ( i <= enteredNumber)
    {
        // Jos käsiteltävänä oleva luku on parillinen
        // (jaollinen kahdella eli jakojäännös on 0 kun jaetaan kahdella)
        if ( i % 2 == 0 )
        {
            printf("%d ", i);
            // sum = sum + i;
            sum += i;
        }
        i++;
    }
    printf("\nSum: %d", sum);
    return 0;
}
