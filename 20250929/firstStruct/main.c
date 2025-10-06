/*
 * Create a simple struct for a phonebook contact.
Include at least members suggested in the slide 3.
You can also add more members.
Create two struct variables.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct Contact
    {
        char name[50];
        char phoneNumber[10];
        char organization[50];
    }
    contact;

    // luo kontaktiarray
    contact phonebook[3];

    contact contact1;
    contact *contact2 = &contact1;

    strcpy(contact1.name, "John");
    strcpy(contact1.phoneNumber, "+3584578");
    strcpy(contact1.organization, "OAMK");

    printf("\nName: %s", contact1.name);
    strcpy(contact1.name, "Johnny");
    printf("\nName: %s", contact2->name);

    strcpy(phonebook[0].name, "John");
    strcpy(phonebook[0].phoneNumber, "+3584578");
    strcpy(phonebook[0].organization, "OAMK");

    strcpy(phonebook[1].name, "Jane");
    strcpy(phonebook[1].phoneNumber, "+45632");
    strcpy(phonebook[1].organization, "JAMK");

    strcpy(phonebook[2].name, "Mary");
    strcpy(phonebook[2].phoneNumber, "+789546");
    strcpy(phonebook[2].organization, "SAMK");

    // Tulosta puhelinluettelo
    for ( int i = 0; i <= 2; i++ )
    {
        printf("\n%s (%s)\t %s", phonebook[i].name, phonebook[i].organization, phonebook[i].phoneNumber);
    }

    int luku = 2;
    printf("\nLuku: %d", luku);
    printf("\nLuku: %p", &luku);

    return 0;
}
