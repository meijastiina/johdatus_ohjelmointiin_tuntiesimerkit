/*
 *
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

int main()
{
    // Luodaan muuttujat
    char id[3];
    //int id;
    char name[30];
    int points[3];
    int totalPoints;
    float average;

    printf("\nID: ");
    scanf("%s", id);
    printf("\nName: ");
    scanf("%s", name);
    printf("\nPoints 1: ");
    scanf("%d", &points[0]);
    printf("\nPoints 2: ");
    scanf("%d", &points[1]);
    printf("\nPoints 3: ");
    scanf("%d", &points[2]);
    // Laske yhteispisteet ja keskiarvo
    totalPoints = points[0] + points[1] + points[2];
    average = (float)totalPoints / 3;
    printf("\nTotal points = %d", totalPoints);
    printf("\nAverage = %.2f", average);
    // suurempi tai yhtä suuri kuin 80 -> Kiitettävä,
    // 79-60 -> Hyvä,
    // 59-40 -> Välttävä,
    // alle 40 -> Hylätty.
    if ( average < 40 ) {
        printf("\nGrade = Fail");
    } else if ( average <= 59 ) {
        printf("\nGrade = Satisfactory");
    } else if ( average <= 79 ) {
        printf("\nGrade = Good");
    } else {
        printf("\nGrade = Great");
    }
    return 0;
}
