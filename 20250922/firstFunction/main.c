#include <stdio.h>
// funktion prototyyppi
void printHello();

// Luo funktio joka tulostaa hello
void printHello()
{
    printf("Hello!\n");
}

// luo summa-funktio
void printSum(int number1, int number2)
{
    // tulosta lukujen summa näytölle
    printf("%d", number1 + number2);
}

// luo summa-funktio
int sum(int number1, int number2)
{
    // palauta lukujen summa kutsuvalle koodille
    return number1 + number2;
}

int main()
{
    // kutsu funktiota
    printHello();
    // kutsu printSum-funktiota
    printSum(1,2132456);
    // kutsu sum-funktiota ja tulosta paluuarvo näytölle
    int summa = sum(123, 444);
    int average = summa/2;
    printf("%d", sum);

    return 0;
}
