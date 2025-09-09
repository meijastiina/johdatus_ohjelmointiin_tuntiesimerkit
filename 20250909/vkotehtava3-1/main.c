/*
 * Tee c-kielinen ohjelma, joka kysyy käyttäjältä kokonaisluvun. Jos käyttäjän antama
 * luku on pienempi kuin 10 saa käyttäjä ilmoituksen ”Annoit luvun, joka on
 * pienempi kuin 10”.
*/
#include <stdio.h>

int main()
{
    // Luo kokonaislukumuuttuja johon tallennetaan käyttäjän syöte
    int luku;
    // Pyydä käyttäjää syöttämään luku
    printf("Enter number:");
    // Luetaan käyttäjän syöte muuttujaan
    scanf("%d", &luku);
    // Jos käyttäjän antama luku on pienempi kuin 10
    if ( luku < 10 )
    {
      // saa käyttäjä ilmoituksen ”Annoit luvun, joka on pienempi kuin 10”
      printf("Less than 10");
    }
    return 0;
}
