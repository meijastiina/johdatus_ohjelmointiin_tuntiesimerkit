/*
 * Luo sovellus joka:
• Kysyy käyttäjältä salanumeron
• Jos salanumero on 17, sovellus onnittelee käyttäjää onnistuneesta valinnasta ja
ohjelma päättyy
Jos käyttäjän syöttämä numero ei ole 17, sovellus kysyy numeroa uudestaan. (Käytä whiletai do-while -toistorakennetta)
*/

#include <stdio.h>

int main()
{
    // luodaan muuttujat
    int secretNumber = 17;
    int userNumber;
    do {
        // kysy käyttäjältä luku
        printf("Enter number: ");
        // lue käyttäjän luku muuttujaan
        scanf("%d", &userNumber);
    } while ( userNumber != secretNumber );
    // onnittele
    printf("Congrats!");
    return 0;
}
