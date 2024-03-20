#include <stdio.h>
#include <string.h>

struct Test
{
    char string1[3];
    char string2[4];
    char string3[3];
};

int main()
{
    struct Test test;
    strcpy(test.string1, "f1");
    strcpy(test.string2, "fo2");
    strcpy(test.string3, "f3");
    printf("Hello %s %s %s!\n", test.string1, test.string2, test.string3);
    return 0;
}
