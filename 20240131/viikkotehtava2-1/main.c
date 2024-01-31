/*
 * Tee c-kielinen ohjelma, joka kysyy käyttäjältä kokonaisluvun. Jos käyttäjän antama
luku on pienempi kuin 10 saa käyttäjä ilmoituksen ”Annoit luvun, joka on
pienempi kuin 10”.
*/
#include <stdio.h>

int main()
{
    // Luodaan muuttuja
    int number;
    // Pyydetään käyttäjää syöttämään luku
    printf("\nEnter a number: ");
    // Luetaan käyttäjän syöttämä luku
    scanf("%d", &number);
    // Jos käyttäjän antama luku on pienempi kuin 10
    if( number < 10 ){
        // saa käyttäjä ilmoituksen ”Annoit luvun, joka on pienempi kuin 10”.
        printf("\nYou entered a number that is less than 10.");
    }
    return 0;
}
