/**
 * Create a simple struct for a phonebook contact.
Include at least members suggested in the slide 3.
You can also add more members.
Create two struct variables.
**/

#include <stdio.h>
#include <string.h> // Tätä tarvitaan merkkijonomuuttujien arvojen asettamiseen (kopioi merkkijonon)
// Phonebook contact struct
typedef struct Contact
{
    // Nimi
    char name[50];
    // puhelinnumero
    char phoneNumber[10];
    // organisaatio
    char organization[50];
}
contact;

int main()
{
    // Luodaan puhelinluettelo array
    contact phoneBook[5];

    // Asetetaan ensimmäisen kontaktin nimi
    strcpy(phoneBook[0].name, "John Doe");
    // Asetetaan ensimmäisen kontaktin puhelinnumero
    strcpy(phoneBook[0].phoneNumber, "12345789");
    // Asetetaan ensimmäisen kontaktin organisaatio
    strcpy(phoneBook[0].organization, "OAMK");

    // Luodaan toinen kontakti
    // Asetetaan ensimmäisen kontaktin nimi
    strcpy(phoneBook[1].name, "Jane Doe");
    // Asetetaan ensimmäisen kontaktin puhelinnumero
    strcpy(phoneBook[1].phoneNumber, "789465");
    // Asetetaan ensimmäisen kontaktin organisaatio
    strcpy(phoneBook[1].organization, "Google");

    // Luodaan toinen kontakti
    // Asetetaan ensimmäisen kontaktin nimi
    strcpy(phoneBook[2].name, "Ville Jansson");
    // Asetetaan ensimmäisen kontaktin puhelinnumero
    strcpy(phoneBook[2].phoneNumber, "7777777");
    // Asetetaan ensimmäisen kontaktin organisaatio
    strcpy(phoneBook[2].organization, "Ikea");

    // Luodaan toinen kontakti
    // Asetetaan ensimmäisen kontaktin nimi
    strcpy(phoneBook[3].name, "Bill Gates");
    // Asetetaan ensimmäisen kontaktin puhelinnumero
    strcpy(phoneBook[3].phoneNumber, "789789");
    // Asetetaan ensimmäisen kontaktin organisaatio
    strcpy(phoneBook[3].organization, "Microsoft");

    // Luodaan toinen kontakti
    // Asetetaan ensimmäisen kontaktin nimi
    strcpy(phoneBook[4].name, "Jussi Juonio");
    // Asetetaan ensimmäisen kontaktin puhelinnumero
    strcpy(phoneBook[4].phoneNumber, "000000000");
    // Asetetaan ensimmäisen kontaktin organisaatio
    strcpy(phoneBook[4].organization, "Organisaatio Ry");

    // Tulosta näytölle puhelinluettelon tiedot
    for ( int i = 0; i < 5; i++ )
    {
        printf("\nName: %s \t\tPhonenumber: %s\t\tOrganization: %s", phoneBook[i].name, phoneBook[i].phoneNumber, phoneBook[i].organization);
    }
    printf("\n");
    return 0;
}
