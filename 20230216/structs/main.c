#include <stdio.h>
#include <string.h>

typedef struct Contact {
    char name[50];
    char phoneNumber[15];
    char organization[50];
} contact;

int main()
{
    // Luo taulukko kontakteille
    contact contactList[5];
    // Syötä kontaktien tiedot (tässä vaiheessa voi laittaa kovakoodattuna)
    strcpy(contactList[0].name, "John Doe");
    strcpy(contactList[0].phoneNumber, "040-456789123");
    strcpy(contactList[0].organization, "OAMK");
    strcpy(contactList[1].name, "Jane Doe");
    strcpy(contactList[1].phoneNumber, "040-78945612");
    strcpy(contactList[1].organization, "Microsoft");
    strcpy(contactList[2].name, "Bill Smith");
    strcpy(contactList[2].phoneNumber, "045-456789");
    strcpy(contactList[2].organization, "BBC");
    // Tulosta kontaktien tiedot
    printf("\n-- Contact List --\n");
    // Käydään taulukon alkiot läpi silmukassa
    for ( int i = 0; i < 5; i++ ) {
        printf("\nName: %s", contactList[i].name);
        printf("\nPhone number: %s", contactList[i].phoneNumber);
        printf("\nOrganization: %s", contactList[i].organization);
    }
    return 0;
}
