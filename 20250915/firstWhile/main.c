#include <stdio.h>

int main()
{
    // luodaan muuttuja käyttäjän syöttämälle nimelle
    char name[20];
    // luodaan iteraattorimuuttuja
    int times = 1;
    printf("Name: ");
    // luetaan käyttäjän syöte muuttujaan
    scanf("%s", name);
    // toista viisi kertaa
    while ( times <= 5 )
    {
        printf("\n%s", name);
        times++;
    }

    printf("\n----------- Do While ---------\n");
    // resetoidaan laskuri
    times = 1;
    // toista viisi kertaa
    do
    {
        printf("\n%s", name);
        times++;
    } while ( times <= 5 );

    printf("\n----------- For ---------\n");
    // tulosta 0-10
    for (times = 0; times <= 10; times++)
    {
        printf("\n%d", times);
    }
    // tulosta 10-0
    for (times = 10; times >= 0; times--)
    {
        printf("\n%d", times);
    }
    // tulosta 10-0
    for (times = 0; times <= 10; times++)
    {
        printf("\n%d", 10-times);
    }
    int row = 0, col = 0;
    for ( row = 0; row <= 9;row++)
    {
        printf("\n");
        for ( col = 0; col <= 9;col++)
        {
           printf("(%d.%d)", row, col);
        }
    }
    return 0;
}
