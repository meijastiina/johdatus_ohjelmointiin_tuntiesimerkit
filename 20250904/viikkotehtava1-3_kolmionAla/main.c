/*
 * Tee C-kielinen ohjelma, joka laskee suorakulmaisen kolmion alan, kun kanta=7m ja
korkeus=4 m sekä tulostaa vastauksen.
Tulostusesimerkki:
 Kun kolmion kanta on 7m ja korkeus 4m, on kolmion ala
14m2.
*/
#include <stdio.h>

int main()
{
  // Luodaan muuttujat kannalle ja korkeudelle
  int kanta = 7;
  int korkeus = 4;
  // Tulosta ala
  printf("Kun kolmion kanta on %dm ja korkeus %dm, on kolmion ala %dm2.\n", kanta, korkeus, kanta * korkeus / 2);
  return 0;
}
