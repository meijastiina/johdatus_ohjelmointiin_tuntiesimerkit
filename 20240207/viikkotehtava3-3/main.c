/*
 *Tee C-kielinen ohjelma, joka kysyy käyttäjältä viikonpäivän numeron (1-7).
Numeron antamisen mukaan ohjelma tulostaa viikonpäivän. Jos käyttäjä antaa
muun numeron kuin 1-7, tulostuu käyttäjälle teksti ”Annoit sellaisen numeron, jolle
ei ole viikonpäivää”
 */
#include <stdio.h>

int main()
{
    // Määrittele muuttujat
    int weekday;
    // Pyydä käyttäjää syöttämään numero
    printf("\nWeekday number: ");
    // Tallenna syötetty numero muuttujaan
    scanf("%d", &weekday);

    printf("\nYou entered %d ", weekday);

    // Vertailu
    // If-elseif-else rakenne
    if (weekday == 1){
        printf("Maanantai");
    } else if (weekday == 2){
        printf("Tiistai");
    } else if (weekday == 3){
        printf("Keskiviikko");
    } else if (weekday == 4){
        printf("Torstai");
    } else if (weekday == 5){
        printf("Perjantai");
    } else if (weekday == 6){
        printf("Lauantai");
    } else if (weekday == 7){
        printf("Sunnuntai");
    } else {
        printf("Annoit sellaisen numeron, jolle ei ole viikonpäivää");
    }

    // Switch case
    switch ( weekday ) {
    case 1: {
        printf("Monday");
        break;
    }
    case 2: {
        printf("Tuesday");
        break;
    }
    case 3: {
        printf("Wednesday");
        break;
    }
    case 4: {
        printf("Thursday");
        break;
    }
    case 5: {
        printf("Friday");
        break;
    }
    case 6: {
        printf("Saturday");
        break;
    }
    case 7: {
        printf("Sunday");
        break;
    }
    default: {
        printf("You entered an invalid number");
        break;
    }
    }

    return 0;
}
