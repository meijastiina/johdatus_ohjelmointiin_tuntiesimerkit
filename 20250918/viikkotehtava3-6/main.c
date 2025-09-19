#include <stdio.h>

int main()
{
    // luodaan muuttuja käyttäjän valinnalle
    int valinta;
    do {
        printf("Paina 9 lopettaaksesi");
        scanf("%d", &valinta);
    } while ( valinta != 9);
    return 0;
}
