/*
 * Pyydä käyttäjää syöttämään luku.
 * Tarkista onko syötetty luku 0.
 *  Jos on -> tulosta "You entered a zero".
 *  Jos ei -> tulosta "You entered something else".
*/
#include <stdio.h>

int main()
{
    // luo muuttuja käyttäjän syöttämälle luvulle
    int userNumber;
    printf("Enter a number: ");
    // lue käyttäjän syöte
    scanf("%d", &userNumber);
    printf("Entered number is %d", userNumber);
    // Tarkista onko syötetty luku 0.
    if ( userNumber == 0 ) {
      printf("\nYou entered a zero");
    }
    else {
      printf("\nYou entered something else");
    }
    // sama toteutettuna switch-rakenteella
    switch( userNumber ){
      case 0: {
        printf("\nYou entered a zero");
        break;
      }
      default: {
        printf("\nYou entered something else");
        break;
      }

    }

    return 0;
}
