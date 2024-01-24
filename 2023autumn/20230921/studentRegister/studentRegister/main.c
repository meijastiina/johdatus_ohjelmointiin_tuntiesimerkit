/*
 * Tee C-kielinen ohjelma, joka kysyy opiskelijan IDnumeron, nimen ja kolmen
osasuorituksen pistemäärän (0-100), sekä laskee niistä keskiarvon. Ohjelma
tulostaa tekstin, Kiitettävä, Hyvä, Välttävä, Hylätty -tekstin sen mukaan mikä
kolmen osasuorituksen keskiarvo on eli
jos keskiarvo on suurempi tai yhtä suuri kuin 80, tulostuu arvosanatekstiksi
Kiitettävä,
jos taas keskiarvo on välillä 79-60, tulostuu arvosanatekstiksi Hyvä,
jos keskiarvo on välillä 59-40, tulostuu arvosanatekstiksi Välttävä,
jos keskiarvo on alle 40, tulostuu tekstiksi Hylätty.
Tulostusesimerkki :
IDnumero : 784
Opiskelijan nimi : Mikko
Osasuoritus1 : 70
Osasuoritus2 : 80
Osasuoritus3 : 90
Pisteet yhteensä = 240
Keskiarvo = 80.00
Arvosanateksti = Kiitettävä
*/
#include <stdio.h>
#include <string.h>
int main()
{

    // Luodaan muuttujat: id, nimi, osasuoritusten pistemäärät, keskiarvo, pisteiden kokonaismäärä
    char id[10];
    char name[50];
    char grade[10];
    float average;
    int score[3];
    int totalScore;
    // Pyydä käyttäjää syöttämään id
    printf("\nID: ");
    // Lue käyttäjän syöttämä id muuttujaan
    scanf("%s", id);
    // Pyydä käyttäjää syöttämään nimi
    printf("\nName: ");
    // Lue käyttäjän syöttämä nimi muuttujaan
    scanf("%s", name);
    // Pyydä käyttäjää syöttämään Osasuoritus1
    printf("\nScore1: ");
    // Lue käyttäjän syöttämä Osasuoritus1 muuttujaan
    scanf("%d", &score[0]);
    // Pyydä käyttäjää syöttämään Osasuoritus2
    printf("\nScore2: ");
    // Lue käyttäjän syöttämä Osasuoritus2 muuttujaan
    scanf("%d", &score[1]);
    // Pyydä käyttäjää syöttämään Osasuoritus3
    printf("\nScore3: ");
    // Lue käyttäjän syöttämä Osasuoritus3 muuttujaan
    scanf("%d", &score[2]);
    // Laske kokonaispistemäärä
    totalScore = score[0] + score[1] + score[2];
    // Laske keskiarvo
    average = totalScore / 3;
    // Tutki arvosanateksti keskiarvon perusteella
    if ( average >= 80) {
    // Jos >= 80
        // Kiitettävä
         strcpy(grade, "excellent");
    }
    else if ( average >= 60 ){
    // jos 79-60
        // Hyvä
        //grade = "good";
    }
    // jos 59-40
        // Välttävä
    // jos alle 40
        // Hylätty
    // Tulosta
    printf("\nID: %s", id);
    printf("\nName: %s", name);
    printf("\nScore1: %d", score[0]);
    printf("\nScore2: %d", score[1]);
    printf("\nScore3: %d", score[2]);
    printf("\nTotal Score: %d", totalScore);
    printf("\nAverage: %.2f", average);
    printf("\nGrade: %s", grade);
    return 0;
}
