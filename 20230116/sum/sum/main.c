#include <stdio.h>

int main()
{
    // Luo kokonaislukumuuttujat numero1 ja numero2
    int number1, number2, sum;
    // Pyydä käyttäjää syöttämään numero1
    printf("Please enter number1: \n");
    // Lue käyttäjän syöte
    scanf("%d", &number1);
    // Pyydä käyttäjää syöttämään numero2
    printf("Please enter number2: \n");
    // Lue käyttäjän syöte
    scanf("%d", &number2);
    // Tulosta "numero1 + numero2 = [vastaus]"
    sum = number1 + number2;
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
