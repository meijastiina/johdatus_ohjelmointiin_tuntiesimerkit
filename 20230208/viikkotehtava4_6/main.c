/*
 * Tee ohjelma joka tulostaa käyttäjälle seuraavan valikon, jossa on kolme vaihtoehtoa:
 *  1. Neliön kehän pituus
 *  2. Ympyrän kehän pituus
 *  9. Lopetus.
 *
 *  Käyttäjä voi valita halutun toiminnan syöttämällä 1,2 tai 9.
 *
 *  Valinta 1 saa aikaan nelioLasku()- funktion kutsun,
 *  valinta 2 saa aikaan ympyraLasku()- funktion kutsun.
 *  Em. funktioissa lasketaan ja tulostetaan neliön ja ympyrän kehän pituudet.
 *  Ympyrän kehä lasketaan kaavalla 2*3.14*ympyränSäde.
 *  Neliön kehä lasketaan kaavalla kehänPituus=4*sivunPituus.
 *  Muista kysyä funktioissa käyttäjältä tarvittaessa ympyrän säde ja neliön sivun pituus.
 *  Aina kehänpituuden laskennan ja tulostuksen jälkeen valikko tulostetaan näytölle uudelleen.
 *
 *  Valinta 9 lopettaa ohjelman. (Käytä while-toistorakennetta)
*/
#include <stdio.h>
#include <locale.h>

// Funktion prototyypit
void nelioLasku();
void ympyraLasku();

int main()
{
    setlocale(LC_ALL,"");
    // Luodaan muuttuja valinnalle, asetetaan arvoksi aluksi 0
    int valinta = 0;
    /* Valikko
     * 1. Neliön kehän pituus
     * 2. Ympyrän kehän pituus
     * 9. Lopetus
     */
    // Tulostetaan valikkoa niin kauan kunnes käyttäjä valitsee 9
    while ( valinta != 9 )
    {
        printf("\n1. Neliön kehän pituus\n");
        printf("2. Ympyrän kehän pituus\n");
        printf("9. Lopetus\n");
        // Luetaan käyttäjän valinta
        scanf("%d", &valinta);
        // Päätetään mitä tehdään käyttäjän valinnan perusteella
        switch (valinta) {
        case 1:
            nelioLasku();
            break;
        case 2:
            printf("\nValittu toka");
            break;
        case 9:
            break;
        default:
            printf("\nVirheellinen valinta");
            break;
        }
    }
    return 0;
}

/* Neliön kehä lasketaan kaavalla kehänPituus=4*sivunPituus.
 */
void nelioLasku()
{
    // pyydetään neliön sivun pituus
    printf("\nSivun pituus: ");
    float sivunPituus;
    scanf("%f", &sivunPituus);
    // Laske sivun pituuden perusteella kehä
    // Tulosta tulos
    printf("\nNeliön kehä on %.2f", 4 * sivunPituus);
}
void ympyraLasku()
{
    // pyydetään ympyrän säde
    // Laske säteen perusteella kehä
    // Tulosta tulos
}
