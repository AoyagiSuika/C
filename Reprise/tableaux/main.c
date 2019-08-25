/**
 * @Author: Dahak Déborah <suika>
 * @Date:   25-08-2019
 * @Email:  deborah.dahak@gmail.com
 * @Project: Reprise
 * @Filename: main.c
 * @Last modified by:   suika
 * @Last modified time: 25-08-2019
 */

#include <stdio.h>

#include "tableaux.h"

int main() {
  int tab1[5] = {0, 1, 2, 3, 4};
  int tab2[5] = {0};
  int i = 0;

  printf("sommeTableau : %d\n", sommeTableau(tab1, 5));
  printf("moyenneTableau : %f\n", moyenneTableau(tab1, 5));
  copierTableau(tab1, tab2, 5);
  printf("copierTableau : ");
    for (i = 0; i < 5; i++) {
      printf("%d ", tab2[i]);
    }
  printf("\n");
  maximumTableau(tab2, 5, 2);
  printf("maximumTableau : ");
    for (i = 0; i < 5; i++) {
      printf("%d ", tab2[i]);
    }
  printf("\n");
  return 0;
}
