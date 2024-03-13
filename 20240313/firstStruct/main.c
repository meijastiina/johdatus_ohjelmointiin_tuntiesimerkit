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

    // Luo kaksi kontaktimuuttujaa
    contact contact1;
    contact contact2;

    // Asetetaan arvot kontaktille 1
    contact1.id = 0;
    strcpy(contact1.name, "John");
    strcpy(contact1.phoneNumber, "+358465132");
    strcpy(contact1.organization, "OAMK");

    // Tulostetaan ekan kontaktin arvot
    printf("\n-- CONTACT 1 --");
    printf("\nID: %d", contact1.id);
    printf("\nName: %s", contact1.name);
    printf("\nPhone number: %s", contact1.phoneNumber);
    printf("\nOrganization: %s", contact1.organization);

    return 0;
}
