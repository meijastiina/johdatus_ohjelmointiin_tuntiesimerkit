
#include <stdio.h>
#include <string.h>

typedef struct Person
{
    char name[50];
    char phoneNumber[15];
}
person;

int main()
{
    person phoneBook[2];

    strcpy(phoneBook[0].name, "John");
    strcpy(phoneBook[0].phoneNumber, "+358451231");

    person *contact1 = &phoneBook[0];
    phoneBook[1] = *contact1;

    for (int i = 0; i < 2; i++) {
        printf("\n%s\t%s", phoneBook[i].name, phoneBook[i].phoneNumber);
    }

    strcpy(phoneBook[0].name, "Jane");
    for (int i = 0; i < 2; i++) {
        printf("\n%s\t%s", phoneBook[i].name, phoneBook[i].phoneNumber);
    }

    printf("\n%s", contact1->name);

    return 0;
}
