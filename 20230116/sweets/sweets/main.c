#include <stdio.h>

int main()
{
    // Luodaan kokonaislukumuuttujat: sweet, kids, sweetsPerKid, leftover
    int sweets, kids, sweetsPerKid, leftover;
    // Kysy käyttäjältä montako karkkia
    printf("Number of sweets: ");
    // Lue karkkien määrä muuttujaan
    scanf("%d", &sweets);
    // Kysy käyttäjältä montako lasta
    printf("Number of kids: ");
    // Lue lasten määrä muuttujaan
    scanf("%d", &kids);
    // Tulostetaan montako karkkia kukin saa
    printf("\nNumber of sweets for each kid: %d", sweets / kids);
    // ja mitä jää yli
    printf("\nNumber of sweets left over: %d\n", sweets % kids);

    printf("Merkkijono eli \"stringi\"");
    return 0;
}
