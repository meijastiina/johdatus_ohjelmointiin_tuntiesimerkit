/* Muuta edellistä ohjelmaa siten, että lisäät siihen luvunTulostus() nimisen aliohjelman. Tätä
aliohjelmaa kutsutaan pääohjelmasta (sitten, kun luku on luettu) ja siihen välitetään luettu
kokonaisluku. luvunTulostus() aliohjelma tulostaa siihen välitetyn luvun näytölle
*/
#include <stdio.h>

// luvunTulostus() nimisen aliohjelman
void luvunTulostus(int numero)
{
    // tulostaa siihen välitetyn luvun näytölle
    printf("\n%d", numero);
}
int main()
{
    // pyydä käyttäjää syöttämään luku
    // luodaan muuttuja käyttäjän syöttämälle luvulle
    int luku;
    // tulostaa näytölle ”Anna kokonaisluku”
    printf("\nAnna kokonaisluku ");
    // luetaan myös kokonaisluku
    scanf("%d", &luku);
    // välitä syötetty luku luvunTulostus()-aliohjelmalle
    luvunTulostus(luku);
    luvunTulostus(12345698);
    return 0;
}
