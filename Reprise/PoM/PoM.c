/**
 * @Author: Dahak Déborah <suika>
 * @Date:   23-08-2019
 * @Email:  deborah.dahak@gmail.com
 * @Project: Reprise
 * @Filename: PoM.c
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

int main() {
  const int MAX = 100, MIN = 1;
  int rep = 0;
  int nb = 0;

  srand(time(NULL));
  nb = (rand() % (MAX - MIN + 1)) + MIN;

    while (rep != nb) {
      printf("Quel est le nombre ?\n");
      scanf("%d", &rep);
      if (rep < nb)
	      printf("C'est plus !\n");
      if (rep > nb)
	      printf("C'est moins !\n");
    }
  printf("GG !\n");
  return 0;
}
