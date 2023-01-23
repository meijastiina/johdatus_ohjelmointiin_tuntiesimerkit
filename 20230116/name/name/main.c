#include <stdio.h>

int main()
{

    // Luodaan muuttuja etunimeä varten
    char name[30];
    // Pyydä käyttäjää syöttämään etunimi
    printf("\nFirst name: ");
    // Lue etunimi muuttujaan
    scanf("%s", &name);
    // Tulosta tervehdys
    printf("\nHello %s!\n\n", name);

    int grade[30];
    // Pyydä käyttäjää syöttämään arvosana
    printf("\nSyötä ensimmäinen arvosana: ");
    // Tyhjennetään stdin
    fflush(stdin);

    // Lue arvosana muuttujaan
    scanf("%d", &grade[0]);
    // Tulosta ensimmäinen arvosana
    printf("\nEnsimmäinen arvosana on %d\n\n", grade[0]);

    // Luodaan muuttuja kokonimeä varten
    char fullname[30];
    // Pyydä käyttäjää syöttämään koko nimi
    printf("\nFull name: ");
    // Tyhjennetään stdin
    fflush(stdin);
    // Lue kokonimi muuttujaan
    gets(fullname);
    // Tulosta tervehdys
    printf("\nHello %s!\n\n", fullname);

    return 0;
}
