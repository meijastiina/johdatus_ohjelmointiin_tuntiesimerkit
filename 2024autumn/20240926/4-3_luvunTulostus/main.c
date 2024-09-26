/*
 * Muuta edellistä ohjelmaa siten, että lisäät siihen luvunTulostus() nimisen aliohjelman. Tätä
aliohjelmaa kutsutaan pääohjelmasta (sitten, kun luku on luettu) ja siihen välitetään luettu
kokonaisluku. luvunTulostus() aliohjelma tulostaa siihen välitetyn luvun näytölle.
*/
#include <stdio.h>
// funktion prototyyppi
int readNumber();
void printNumber(int number);

int main()
{
    // kutsutaan funktiota
    // tulosta palautettu luku näytölle
    int number = readNumber(); // tallennetaan funktiolta paluuarvona saatu luku muuttujaan
    //printNumber(number);
    //printNumber(readNumber());
    return 0;
}

/********************************
 * Syöteparametrit  - -
 * Paluuarvo        - int: käyttäjän syöttämä kokonaisluku
 *******************************/

int readNumber()
{
    // luodaan muuttuja kokonaisluvulle
    int number;
    // tulostaa näytölle ”Anna kokonaisluku”
    printf("Number: ");
    // lue käyttäjän syöte
    scanf("%d", &number);
    // palautetaan number-muuttujan arvo kutsujalle
    return number;
}

// luvunTulostus() aliohjelma tulostaa siihen välitetyn luvun näytölle.
/********************************
 * Syöteparametrit  - int: tulostettava luku
 * Paluuarvo        - void
 *******************************/
void printNumber(int number)
{
    // tulostetaan parametrina saatu luku
    printf("%d", number);
}
