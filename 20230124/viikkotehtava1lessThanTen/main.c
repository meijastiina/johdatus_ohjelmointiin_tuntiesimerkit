/* Tee c-kielinen ohjelma, joka kysyy käyttäjältä kokonaisluvun. Jos käyttäjän antama
luku on pienempi kuin 10 saa käyttäjä ilmoituksen ”Annoit luvun, joka on
pienempi kuin 10”
*/
#include <stdio.h>

int main()
{
    // Luo muuttuja käyttäjän syötettä varten
    int number;
    // Pyydetään käyttäjää syöttämään kokonaisluku
    printf("Anna luku: ");
    // Luetaan käyttäjän syöttämä kokonaisluku
    scanf("%d", &number);
    // Tarkistetaanko onko syöte pienempi kuin 10
    if ( number < 10 ) {
        // Tulostetaan ”Annoit luvun, joka on pienempi kuin 10”
        printf("Annoit luvun, joka on pienempi kuin 10");
    }
    return 0;
}
