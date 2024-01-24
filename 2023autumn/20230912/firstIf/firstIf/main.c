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
    if ( number >= 1 && number <= 10 )
    {
        printf("\nNumber is within range 1-10\n");
    }

    // Onko number alueen 1-10 ulkopuolella
    if ( number < 1 || number > 10 )
    {
        printf("\nNumber is outside range 1-10\n");
    }

    int y = 11;
    // Onko number välillä 1-10 ja y on alueen 1-10 ulkopuolella
    if ((number >= 1 && number <= 10) && (y < 1 || y > 10 ))
    {
        printf("\nNumber is within and y is outside range 1-10\n");
    }

    /******************** SWITCH CASE ***********************/
    switch(number) {
        // Jos syöte on 0
        case 0:
        {
            // Tulosta "You entered a zero"
            printf("\nYou entered a zero\n");
            break;
        }
        case 1:
        {
            // Tulosta "You entered a zero"
            printf("\nYou entered a one\n");
            break;
        }
        case 2:
        {
            // Tulosta "You entered a zero"
            printf("\nYou entered a two\n");
            break;
        }
        case 3:
        {
            // Tulosta "You entered a zero"
            printf("\nYou entered a three\n");
            break;
        }
        // muussa tapauksessa
        default:
        {
            // Tulosta "You entered something else"
            printf("\nYou entered something else\n");
        }
    }
    return 0;
}
