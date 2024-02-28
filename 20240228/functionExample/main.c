#include <stdio.h>

// funktion prototyyppi:
//  funktion paluuarvon tietotyyppi (output)
//  funktion nimi
//  funktion syöteparametrit (input)
int multiply(int number1, int number2);

int main()
{
    // Funktion kutsu
    //  Paluuarvon käsittely (output)
    //  Funktion nimi
    //  Funktiolle välitettävät syöteparametrit (input)
    int returnValue = multiply(1, 3);
    return 0;
}

// funktion määrittely:
//  funktion header
//      funktion paluuarvon tietotyyppi (output)
//      funktion nimi
//      funktion syöteparametrit (input)
//  funktion body
//      funktion toiminnallisuus (suoritettavat koodirivit)
//      funktion paluuarvon määrittäminen
int multiply(int number1, int number2)
{
    // Palautetaan kutsuvalle ohjelmalle annettujen lukujen tulo
    return number1 * number2;
}
