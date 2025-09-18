#include <stdio.h>
void everyNthNumber(int number) {
    // your code goes here
    if ( number > 0) {
        for ( int i = 0; i <= 100; i+=number) {
            printf("%d\n", i);
        }
    } else {
        printf("Invalid input");
    }
}

int main()
{

    everyNthNumber(10);
    return 0;
}


