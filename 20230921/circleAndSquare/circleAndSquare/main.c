/*
 *6. Tee ohjelma joka tulostaa käyttäjälle seuraavan valikon, jossa on kolme vaihtoehtoa:
1. Neliön kehän pituus
2. Ympyrän kehän pituus
9. Lopetus.
Käyttäjä voi valita halutun toiminnan syöttämällä 1,2 tai 9.
Valinta 1 saa aikaan tulostuksen ”Valittu Neliön kehän pituus”, valinta 2 saa aikaan
tulostuksen ”Valittu Ympyrän kehän pituus”. Em. tulostuksien jälkeen valikko tulostetaan
aina uudelleen. Valinta 9 lopettaa ohjelman. (Käytä while-toistorakennetta)
*/
#include <stdio.h>

int main()
{
    // Luodaan muuttuja valinnalle
    int choice = 0;
    // Toista kunnes käyttäjä syöttää 9
    while (choice != 9) {
        // Tulosta valikko
        printf("\n1. Circumference of a square");
        printf("\n2. Circumference of a circle");
        printf("\n9. Quit\n");
        // Luetaan käyttäjän syöte
        scanf("%d", &choice);
        printf("\nYour choice: %d", choice );
        switch (choice) {
        // Jos syöte 1
        case 1:
            // Tulostetaan valinnan mukainen viesti
            printf("\nCircumference of a square selected.\n");
            break;
        // Jos syöte 2
        case 2:
            // Tulostetaan
            printf("\nCircumference of a circle selected.\n");
            break;
        // Jos syöte 9
        case 9:
            // Lopetetaan
            break;
        default:
            printf("\nInvalid choice\n");
        }

    }
    return 0;
}
