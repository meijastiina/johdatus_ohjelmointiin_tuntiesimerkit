/*
 * Tee ohjelma joka tulostaa k�ytt�j�lle seuraavan valikon, jossa on kolme vaihtoehtoa:
 *  1. Neli�n keh�n pituus
 *  2. Ympyr�n keh�n pituus
 *  9. Lopetus.
 *
 *  K�ytt�j� voi valita halutun toiminnan sy�tt�m�ll� 1,2 tai 9.
 *
 *  Valinta 1 saa aikaan nelioLasku()- funktion kutsun,
 *  valinta 2 saa aikaan ympyraLasku()- funktion kutsun.
 *  Em. funktioissa lasketaan ja tulostetaan neli�n ja ympyr�n keh�n pituudet.
 *  Ympyr�n keh� lasketaan kaavalla 2*3.14*ympyr�nS�de.
 *  Neli�n keh� lasketaan kaavalla keh�nPituus=4*sivunPituus.
 *  Muista kysy� funktioissa k�ytt�j�lt� tarvittaessa ympyr�n s�de ja neli�n sivun pituus.
 *  Aina keh�npituuden laskennan ja tulostuksen j�lkeen valikko tulostetaan n�yt�lle uudelleen.
 *
 *  Valinta 9 lopettaa ohjelman. (K�yt� while-toistorakennetta)
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
     * 1. Neli�n keh�n pituus
     * 2. Ympyr�n keh�n pituus
     * 9. Lopetus
     */
    // Tulostetaan valikkoa niin kauan kunnes k�ytt�j� valitsee 9
    while ( valinta != 9 )
    {
        printf("\n1. Neli�n keh�n pituus\n");
        printf("2. Ympyr�n keh�n pituus\n");
        printf("9. Lopetus\n");
        // Luetaan k�ytt�j�n valinta
        scanf("%d", &valinta);
        // P��tet��n mit� tehd��n k�ytt�j�n valinnan perusteella
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

/* Neli�n keh� lasketaan kaavalla keh�nPituus=4*sivunPituus.
 */
void nelioLasku()
{
    // pyydet��n neli�n sivun pituus
    printf("\nSivun pituus: ");
    float sivunPituus;
    scanf("%f", &sivunPituus);
    // Laske sivun pituuden perusteella keh�
    // Tulosta tulos
    printf("\nNeli�n keh� on %.2f", 4 * sivunPituus);
}
void ympyraLasku()
{
    // pyydet��n ympyr�n s�de
    // Laske s�teen perusteella keh�
    // Tulosta tulos
}
