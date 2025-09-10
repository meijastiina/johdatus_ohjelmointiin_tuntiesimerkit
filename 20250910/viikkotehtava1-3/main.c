/* Tee C-kielinen ohjelma, joka kysyy käyttäjältä viikonpäivän numeron (1-7).
Numeron antamisen mukaan ohjelma tulostaa viikonpäivän. Jos käyttäjä antaa
muun numeron kuin 1-7, tulostuu käyttäjälle teksti ”Annoit sellaisen numeron, jolle
ei ole viikonpäivää”
*/
#include <stdio.h>

int main()
{
    int weekdayNumber;
    printf("Enter number: ");
    scanf("%d", &weekdayNumber);
    switch(weekdayNumber)
    {
    case 1: {
        printf("Maanantai");
        break;
    }
    case 2: {
        printf("Tiistai");
        break;
    }
    case 3: {
        printf("Keskiviikko");
        break;
    }
    case 4: {
        printf("Torstai");
        break;
    }
    case 5: {
        printf("Perjantai");
        break;
    }
    case 6: {
        printf("Lauantai");
        break;
    }
    case 7: {
        printf("Sunnuntai");
        break;
    }
    default:
        printf("Annoit sellaisen numeron, jolle ei ole viikonpäivää");
    }

    return 0;
}
