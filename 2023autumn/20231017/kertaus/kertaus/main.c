#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    // Luodaan kokonaislukumuuttuja x, jolle asetetaan arvo 4
    int x = 6;
    printf("\nVariable x value is %d\n", x); // x on kokonaislukumuuttuja (int, integer)
    printf("\nVariable x address is %p\n", &x); // &x on kokonaislukumuuttuja x:n muistipaikan osoite

    // Luodaan pointteri, joka viittaa kokonaislukumuuttujaan x
    int *pX = &x;
    printf("\nVariable pX value is %p\n", pX); // pX on pointterin arvo (sen muuttujan osoite, johon pointteri viittaa)
    printf("\nVariable that pX points to, value is %d\n", *pX); // *pX on arvo, johon pX-pointteri viittaa

    // Luodaan kokonaislukutaulukko (array)
    int numbers[5] = {1, 4, 2, 7, 4};
    printf("\nValue of the first item in the array is %d\n", numbers[0]);
    printf("\nAddress of the first item in the array is %p\n", &numbers[0]);
    printf("\nValue of the second item in the array is %d\n", numbers[1]);
    printf("\nAddress of the second item in the array is %p\n", &numbers[1]);
    printf("\nAddress of the array is %p\n", &numbers);

    if ( x > 0 ) // jos ehto on tosi suoritetaan koodirivit aaltosulkeiden v‰liss‰
    {
        printf("X is positive");
    }
    else if ( x == 0 )
    {
        printf("X is zero");
    }
    else // aina jos if-ehto ei ole tosi, menn‰‰n t‰nne
    {
        printf("X is negative");
    }

    // Tulosta jos x ei ole v‰lill‰ 5-10
    if ( x < 5 || x > 10 )
    {
        printf("\nX is outside range 5-10\n");
    }

    printf("\n**************Tulosta numbers-taulukon arvot**********");
    // Tulosta numbers-taulukon arvot
    for ( int i = 0; i < 5; i++)
    {
        printf("\nValue of the item in the index %d in the array is %d\n", i, numbers[i]);
    }

    printf("\n**************Tulosta numbers-taulukon arvot k‰‰nteisess‰ j‰rjestyksess‰**********");
    // Tulosta numbers-taulukon arvot k‰‰nteisess‰ j‰rjestyksess‰
    for ( int i = 4; i >= 0; i--)
    {
        printf("\nValue of the item in the index %d in the array is %d\n", i, numbers[i]);
    }

    printf("\n**************Tulosta joka toinen arvo numbers-taulukosta**********");
    // Tulosta joka toinen arvo numbers-taulukosta
    for ( int i = 0; i < 5; i+=2)
    {
        printf("\nValue of the item in the index %d in the array is %d\n", i, numbers[i]);
    }

    int number1 = 5;
    printf("\n**************Testataan number1+=2 **********");
    printf("number1 muuttujan arvo on: %d", number1+=2);
    number1 = 5;
    printf("\n**************Testataan number1=+2 **********");
    printf("number1 muuttujan arvo on: %d", number1=+2);

    printf("\n**************Tulosta numbers-taulukon arvot while-silmukalla**********");
    // Tulosta numbers-taulukon arvot
    int i = 0;
    while ( i < 5)
    {
        printf("\nValue of the item in the index %d in the array is %d\n", i, numbers[i]);
        i++;
    }
    return 0;
}
