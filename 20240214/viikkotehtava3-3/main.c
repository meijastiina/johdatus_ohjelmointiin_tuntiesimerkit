/*Luo sovellus joka:
• Kysyy käyttäjältä salanumeron
• Jos salanumero on 17, sovellus onnittelee käyttäjää onnistuneesta valinnasta ja
ohjelma päättyy
Jos käyttäjän syöttämä numero ei ole 17, sovellus kysyy numeroa uudestaan. (Käytä whiletai do-while -toistorakennetta)
*/

#include <stdio.h>

int main()
{
    // Luodaan muuttujat
    int secretNumber = 17, userNumber;
    // toistetaan niin kauan että saadaan oikea numero (do while koska halutaan kysyä aina ainakin kerran)
    do {
        // Kysy käyttäjältä salanumero
        printf("\nNumber: ");
        scanf("%d", &userNumber);
    } while( userNumber != secretNumber );
    // onnittelee käyttäjää onnistuneesta valinnasta ja
    printf("\nCongratulations! Great choice!\n");
    // ohjelma päättyy
    return 0;
}
