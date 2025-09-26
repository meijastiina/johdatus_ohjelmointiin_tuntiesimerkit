/*
 * Tee ohjelma, joka lukee käyttäjän syöttämän kokonaisluvun (int) ja desimaaliluvun (double)
char-taulukkoon. Sitten ohjelma summaa luvut ja tulostaa näyttöön. (Käytä <stdlib.h>
kirjaston atoi()- ja atof()-funktioita, jotka muuttavat merkkijonon luvuksi
int luku=atoi(merkkijono); //muuntaa merkkijonon kokonaisluvuksi
double luku2=atof(merkkijono); //muuntaa merkkijonon double luvuksi)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kokonaisluku[] = "2";
    char desimaaliluku[] = "5.12";

    // Laske luvut yhteen ja tulosta näytölle
    printf("%f", atoi(kokonaisluku) + atof(desimaaliluku));
    return 0;
}
