/*
 * 4. Tee ohjelma, joka tulostaa käyttäjän syöttämän kokonaisluvun kymmenen kertotaulun eli,
jos käyttäjä syöttää luvun 5 tulostuu seuraavaa:
5*1=5
5*2=10
5*3=15
…jne. 5*10=50 asti
*/
#include <stdio.h>

int main()
{
    for ( int multiplicator = 1; multiplicator <= 10; multiplicator++) {
        printf("\n******* MULTIPLICATION TABLE FOR %d *******\n", multiplicator);
        for ( int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", multiplicator, i, multiplicator*i);
        }
    }
    return 0;
} 
