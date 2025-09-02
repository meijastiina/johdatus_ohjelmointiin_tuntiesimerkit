/*
 * Tee C-kielinen ohjelma, joka laskee suorakulmaisen kolmion alan, kun kanta=7m ja
 * korkeus=4 m sekä tulostaa vastauksen.
 * Tulostusesimerkki:
 * Kun kolmion kanta on 7m ja korkeus 4m, on kolmion ala 14m2.
*/
#include <stdio.h>

int main()
{
  // luodaan muuttuja kolmion alaa varten
  int ala, kanta = 7, korkeus = 4;
  // laske kolmion ala kun kanta on 7 ja korkeus 4
  ala = kanta * korkeus / 2;
  // tulosta Kun kolmion kanta on 7m ja korkeus 4m, on kolmion ala 14m2.
  printf("Kun kolmion kanta on %dm ja korkeus %dm, on kolmion ala %dm2.", kanta, korkeus, ala);
  return 0;
}
