#include <stdio.h>
#include <string.h>

// Luodaan opiskelijatietue
typedef struct Student {
    // Luo muuttujat opiskelijan tiedoille
    char name[50];
    char studentNumber[5];
} student;

int main()
{
    // Luo taulukko opiskelijoille
    student newStudent[5];
    // Kysy viiden opiskelijan tiedot
    printf("\n-- Enter student information --\n");
    // Toistetaan viisi kertaa
    for ( int i = 0; i < 5; i++ )
    {
        printf("\nName: ");
        scanf("%s", newStudent[i].name);
        // Asetetaan opiskelijanumeroksi juokseva numero ykkösestä alkaen
        char tmp[5];
        sprintf(tmp, "%ld", i + 1);
        strcpy(newStudent[i].studentNumber, tmp);
    }
    // Tulosta kaikkien opiskelijoiden tiedot
    printf("\n\n-- Student information --\n");
    for ( int i = 0; i < 5; i++ )
    {
        printf("\nName: %s", newStudent[i].name);
        printf("\nStudent number: %s", newStudent[i].studentNumber);
    }
    // Opiskelijan etsiminen opiskelijanumeron perusteella
    printf("\n\n-- Search for a student --\n");
    printf("Student number: ");
    char studentNumberToSearch[50];
    scanf("%s", studentNumberToSearch);
    for ( int i = 0; i < 5; i++ )
    {
        // Tarkista onko etsitty opiskelija
        if ( !strcmp( newStudent[i].studentNumber, studentNumberToSearch ) )
        {
            printf("\nName: %s", newStudent[i].name);
            printf("\nStudent number: %s", newStudent[i].studentNumber);
        }
    }
    return 0;
}
