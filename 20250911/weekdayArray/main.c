#include <stdio.h>

int main()
{
    // luodaan viikonpäiväarray
    char weekdayArray[7][3] = {"ma", "ti", "ke", "to", "pe", "la", "su"};
    int chosenWeekday;
    scanf("%d", &chosenWeekday);
    printf(weekdayArray[chosenWeekday - 1]);
    return 0;
}
