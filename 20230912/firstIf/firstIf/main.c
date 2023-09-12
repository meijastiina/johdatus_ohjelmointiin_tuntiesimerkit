#include <stdio.h>

int main()
{
    // Pyydä käyttäjää syöttämään numero
    printf("Please enter a number: ");
    // Luo muuttuja numerolle
    int number;
    // Lue annettu numero muuttujaan
    scanf("%d",&number);
    // Jos syöte on 0
    if ( number == 0 )
    {
        // Tulosta "You entered a zero"
        printf("\nYou entered a zero\n");
    }
    // muussa tapauksessa
    else
    {
        // Tulosta "You entered something else"
        printf("\nYou entered something else\n");
    }

    // Onko number välillä 1-10
    if ()
    {
        printf("\nNumber is within range 1-10\n");
    }
    return 0;
}
