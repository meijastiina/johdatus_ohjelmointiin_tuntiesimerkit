/*
 * 3. Muuta edellistä ohjelmaa siten, että lisäät siihen luvunTulostus() nimisen aliohjelman.
 * Tätä aliohjelmaa kutsutaan pääohjelmasta (sitten, kun luku on luettu) ja siihen välitetään luettu
 * kokonaisluku.
 * luvunTulostus() aliohjelma tulostaa siihen välitetyn luvun näytölle.
*/

#include <stdio.h>

// Funktion prototyyppi
int lue();
void luvunTulostus(int);

int main()
{
    // Pääohjelmasta kutsutaan aliohjelmaa lue(), joka pyytää käyttäjältä kokonaisluvun.
    int givenNumber = lue();
    // luvunTulostus() aliohjelma tulostaa siihen välitetyn luvun näytölle.
    luvunTulostus(givenNumber);
    return 0;
}

int lue()
{
    // tulostaa näytölle ”Anna kokonaisluku”
    printf("Anna kokonaisluku: ");
    // Tässä aliohjelmassa luetaan myös kokonaisluku
    int number;
    scanf("%d\n", &number);
    // palautetaan luettu kokonaisluku pääohjelmaan
    return number;
}

void luvunTulostus(int number)
{
    // luvunTulostus() aliohjelma tulostaa siihen välitetyn luvun näytölle.
    printf("%d", number);
}
