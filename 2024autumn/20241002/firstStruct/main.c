/*
 * Create a simple struct for a phonebook contact.
Include at least members suggested in the slide 3.
You can also add more members.
Create two struct variables.
*/
/*
 * Create an array of contacts
Five contacts
Each of them have different values
Loop through the array and print out all the info about the contacts.*/

#include <stdio.h>
#include <string.h>

//struct for a phonebook contact
typedef struct Contact {
    int hotkey;
    char name[50];
    char phoneNumber[20];
    char organization[20];
} contact;

int main()
{
    //Create an array of contacts
    contact phoneBook[5];

    // Create two struct variables.
    struct Contact contact1;
    contact contact2;

    // asetetaan arvot ekalle kontaktille
    contact1.hotkey = 1;
    strcpy(contact1.name, "John Doe");
    phoneBook[0] = contact1;
    strcpy(phoneBook[0].phoneNumber, "050456132");
    strcpy(phoneBook[0].organization, "OAMK");

    // asetetaan arvot tokalle kontaktille
    strcpy(phoneBook[1].name, "Jane Doe");
    strcpy(phoneBook[1].phoneNumber, "+358 45 8408132");
    strcpy(phoneBook[1].organization, "Nokia");

    // asetetaan arvot kolmas kontaktille
    strcpy(phoneBook[2].name, "Jane Smith");
    strcpy(phoneBook[2].phoneNumber, "+358 45 8408132");
    strcpy(phoneBook[2].organization, "Telia");

    // asetetaan arvot neljannelle kontaktille
    strcpy(phoneBook[3].name, "Michael Smith");
    strcpy(phoneBook[3].phoneNumber, "+358 45 8408132");
    strcpy(phoneBook[3].organization, "Microsoft");

    // asetetaan arvot viidennelle kontaktille
    strcpy(phoneBook[4].name, "Ville Virtanen");
    strcpy(phoneBook[4].phoneNumber, "+358 789465132");
    strcpy(phoneBook[4].organization, "Putki ja poltin");

    // loopataan kontaktit ja tulostetaan
    for ( int i = 0; i < 5; i++ )
    {
        printf("\n%s\t%s\t%s", phoneBook[i].name, phoneBook[i].phoneNumber, phoneBook[i].organization);
    }
    return 0;
}
