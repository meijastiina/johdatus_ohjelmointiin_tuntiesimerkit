#include <stdio.h>

int main()
{
    int number1, number2;
    char operand;

    printf("Number1: ");
    scanf("%d", &number1);
    printf("Operand: ");
    //scanf(" %c", &operand);
    operand = fgetc(stdin);
    printf("Number2: ");
    scanf("%d", &number2);
    return 0;
}
