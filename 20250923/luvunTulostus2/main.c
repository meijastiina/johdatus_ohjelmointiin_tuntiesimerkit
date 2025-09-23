/*
 * Muuta edellistä ohjelmaa siten, että lisäät siihen luvunTulostus() nimisen aliohjelman. Tätä
aliohjelmaa kutsutaan pääohjelmasta (sitten, kun luku on luettu) ja siihen välitetään luettu
kokonaisluku. luvunTulostus() aliohjelma tulostaa siihen välitetyn luvun näytölle
*/
#include <stdio.h>

// luvunTulostus()-funktio
void luvunTulostus(int kokonaisluku)
{
    // tulostaa siihen välitetyn luvun näytölle
    printf("\n%d", kokonaisluku);
}

// lue()-funktio
int lue()
{
    int luku;
    // pyydä käyttäjältä luvun
    printf("Anna luku: ");
    scanf("%d", &luku);
    return luku;
}

int main()
{
    // kutsu lue()-funktiota
    int luku = lue();
    // kutsu luvunTulostus()-funktiota
    luvunTulostus(luku);
    // voidaan kirjoittaa myös lyhyemmin ilman muuttujaa
    luvunTulostus(lue());
    return 0;
}
