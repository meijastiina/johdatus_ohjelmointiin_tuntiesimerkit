/*
 * 5. Tee ohjelma, joka lukee käyttäjältä kokonaisluvun. Sitten ohjelma summaa tähän lukuun asti
kaikkien parillisten lukujen arvot ja tulostaa summan näytölle. (HUOM luku%2 jakojäännös
on nolla parillisilla luvuilla) (Jos käyttäjä syöttää luvun 8 niin ohjelma tulostaa luvun 20
(0+2+4+6+8)
*/
#include <stdio.h>

int main()
{
    int number = 9;
    // onko luku parillinen
    if ( number % 2 == 0) {
        printf("Parillinen");
    } else {
        printf("Pariton");
    }
    return 0;
}
