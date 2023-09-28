#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    printf("Heipä hei maailma!\n");

    char merkki;
    printf("Haluatko jatkaa (y/n)?");
    scanf("%c", &merkki);
    switch(merkki)
    {
        case 'y':
            printf("Jatketaan\n");
            break;
        case 'n':
            printf("Lopetetaan\n");
            break;
        default:
            printf("Virheellinen valinta\n");
    }
    float test;
    printf("Syötä testi: ");
    scanf("%f", &test);
    printf("test %f\n", test);
    return 0;
}
