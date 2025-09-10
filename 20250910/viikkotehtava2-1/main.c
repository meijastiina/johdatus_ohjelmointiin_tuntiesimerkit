/*
 * Tee c-kielinen ohjelma, joka kysyy käyttäjältä kokonaisluvun. Jos käyttäjän antama
 * luku on pienempi kuin 10 saa käyttäjä ilmoituksen ”Annoit luvun, joka on
 * pienempi kuin 10”.
*/
#include <stdio.h>

int main()
{
    // luo muuttuja käyttäjän syöttämälle luvulle
    int luku;
    // Pyydä käyttäjältä kokonaisluku
    printf("Anna kokonaisluku: ");

    // Tallenna käyttäjän syöttämä luku muuttujaan
    scanf("%d", &luku);

    // Jos käyttäjän antama luku on pienempi kuin 10
    if ( luku < 10 )
    {
        // saa käyttäjä ilmoituksen ”Annoit luvun, joka on pienempi kuin 10”
        printf("Annoit luvun %d, joka on pienempi kuin 10", luku);


    }
    else if ( luku > 10 )
    {
        printf("Annoit luvun %d, joka on suurempi kuin 10", luku);
    }
    else
    {
        printf("Annoit luvun %d, joka on yhtä suuri kuin 10", luku);
    }
    return 0;
}
