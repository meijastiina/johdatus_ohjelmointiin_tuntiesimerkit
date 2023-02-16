#include <stdio.h>
#include <string.h>

void tulostaMuuttuja(int *muuttuja) {
    (*muuttuja)++;
    printf("\n-- Tulosta Muuttuja %d --\n", *muuttuja);
}

void tulostaMerkkijonoMuuttuja(char * muuttuja) {
    printf("%s", muuttuja);
}

int main()
{
    int luku = 1;
    luku = 3;

    printf("\nMuuttujan luku arvo: %d\n", luku);
    printf("\nMuuttujan luku osoite: %p\n", &luku);

    int* pointer = &luku;
    printf("\nMuuttujan pointer arvo: %d\n", *pointer);
    printf("\nMuuttujan pointer osoite: %p\n", &pointer);

    luku = 10;
    printf("\nMuuttujan pointer arvo: %d\n", *pointer);

    int taulukko[5];
    char teksti[30] = "foo";
    char kirjain = 'b';

    strcpy(teksti, "uusi teksti");

    tulostaMuuttuja(&luku);
    printf("\nMuuttujan luku arvo: %d\n", luku);
    tulostaMerkkijonoMuuttuja(teksti);

    if ( luku == 10 ) {
        printf("\nLuku on 10.");
    } else {
        printf("\nLuku ei ole 10.");
    }

    if ( strcmp(teksti, "uusi teksti") == 0) {
        printf("\nTeksti on uusi teksti.");
    } else {
        printf("\nTeksti ei ole uusi teksti.");
    }
    return 0;
}
