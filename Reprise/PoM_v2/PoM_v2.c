/**
 * @Author: Dahak Déborah <suika>
 * @Date:   23-08-2019
 * @Email:  deborah.dahak@gmail.com
 * @Project: Reprise
 * @Filename: PoM_v2.c
 * @Last modified by:   suika
 * @Last modified time: 23-08-2019
 */

/* Ce petit jeu consiste à deviner un nombre aléatoire compris entre
** 1 et 100. A chaque proposition, le jeu vous indique si c'est plus
** ou moins, ou si vous avez gagné.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "PoM_v2.h"

int main() {
  const int MIN = 1;
  int max = 100;
  int mod = 1;
  int rep = 0;
  int con = 1;
  int nb = 1;
  int i = 0;

  srand(time(NULL));
  while (con != 2) {
    switch(difficulte()) {
      case 1 :
      max = 100;
      break;
      case 2 :
      max = 1000;
      break;
      case 3 :
      max = 10000;
      break;
      default :
      max = 100;
      break;
	  }
    switch(mode(max, MIN)) {
  	  case 1 :
      nb = (rand() % (max - MIN + 1)) + MIN;
	    break;
      case 2 :
      printf("Entrez le nombre mystère :\n");
      scanf("%d", &nb);
      break;
      default :
      nb = (rand() % (max - MIN + 1)) + MIN;
      break;
    }
  i = 0;

  while (rep != nb) {
    printf("Quel est le nombre ?\n");
    scanf("%d", &rep);
    i++;
    if (rep < nb)
      printf("C'est plus !\n");
    if (rep > nb)
      printf("C'est moins !\n");
    }
  printf("En %d coups, GG !\n", i);
  printf("1. Continuer\n2. Quitter\n");
  scanf("%d", &con);
  }
  return 0;

}

int difficulte() {
  int dif = 1;

  printf("Veuillez choisir un niveau de difficulté :\n");
  printf("1. Entre 1 et 100\n");
  printf("2. Entre 1 et 1000\n");
  printf("3. Entre 1 et 10000\n");
  scanf("%d", &dif);
  switch(dif) {
    case 1 :
    return (100);
    case 2 :
    return (1000);
    case 3 :
    return (10000);
    default :
    return (100);
    }
  return (100);
}

int mode(int max, const int MIN) {
  int mod = 1;

  printf("1. Tout seul ?\n2. A deux ?\n");
  scanf("%d", &mod);
	switch(mod) {
	  case 1 :
	  return (1);
	  case 2 :
	  return (2);
	  default :
	  return (1);
  }
}
