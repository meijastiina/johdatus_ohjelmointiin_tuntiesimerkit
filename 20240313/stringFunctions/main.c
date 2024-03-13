#include <stdio.h>
#include <string.h>

int main()
{
    int age = 15;
    int anotherAge;
    printf("\nAge: %d", age);
    if ( age == anotherAge ) {
        printf("\nAge and anotherAge are equal.");
    } else {
        printf("\nAge and anotherAge are NOT equal.");
    }
    // Kopioidaan age-muuttujan arvo anotherAge-muuttujaan
    anotherAge = age;
    printf("\nAnother age: %d", anotherAge);
    if ( age == anotherAge ) {
        printf("\nAge and anotherAge are equal.");
    } else {
        printf("\nAge and anotherAge are NOT equal.");
    }

    char name[] = "John";
    char anotherName[50];
    printf("\nName: %s", name);
    if ( strcmp(name, anotherName) == 0 ) {
        printf("\nname and anotherName are equal.");
    } else {
        printf("\nname and anotherName are NOT equal.");
    }
    // Kopioidaan name-muuttujan arvo anotherName-muuttujaan
    strcpy(anotherName, name);
    printf("\nAnother name: %s", anotherName);
    if ( strcmp(name, anotherName) == 0 ) {
        printf("\nname and anotherName are equal.");
    } else {
        printf("\nname and anotherName are NOT equal.");
    }
    return 0;
}
