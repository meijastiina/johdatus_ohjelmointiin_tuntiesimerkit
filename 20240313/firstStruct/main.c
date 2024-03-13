#include <stdio.h>
#include <string.h>

int main()
{
    // Luo tietue puhelinluettelokontakteja varten
    typedef struct Contact {
        int id;
        char name[50];
        char phoneNumber[10];
        char organization[20];
    }
    contact;

    // Luo kontaktimuuttuja-taulukko
    contact phoneBook[5];

    // Asetetaan arvot kontaktille 1
    phoneBook[0].id = 0;
    strcpy(phoneBook[0].name, "John");
    strcpy(phoneBook[0].phoneNumber, "358465132");
    strcpy(phoneBook[0].organization, "OAMK");

    phoneBook[1].id = 112;
    strcpy(phoneBook[1].name, "Joe");
    strcpy(phoneBook[1].phoneNumber, "123456");
    strcpy(phoneBook[1].organization, "Laurea");

    phoneBook[2].id = 278;
    strcpy(phoneBook[2].name, "Mary");
    strcpy(phoneBook[2].phoneNumber, "6666666");
    strcpy(phoneBook[2].organization, "Google");

    // Käydään läpi kaikki kontaktit puhelinluettelossa
    for ( int i = 0; i < 3; i++ )
    {
        // Tulostetaan kontaktien arvot
        printf("\n-- CONTACT %d --", i + 1);
        printf("\nID: %d", phoneBook[i].id);
        printf("\nName: %s", phoneBook[i].name);
        printf("\nPhone number: %s", phoneBook[i].phoneNumber);
        printf("\nOrganization: %s", phoneBook[i].organization);
    }
    return 0;
}
