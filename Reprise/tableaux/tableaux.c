/**
 * @Author: Dahak Déborah <suika>
 * @Date:   23-08-2019
 * @Email:  deborah.dahak@gmail.com
 * @Project: Reprise
 * @Filename: tableaux.c
 * @Last modified by:   suika
 * @Last modified time: 25-08-2019
 */

#include "tableaux.h"

int sommeTableau(int tab[], int size) {
  int res = 0;
  int i = 0;

    for (i = 0; i < size; i++) {
      res = res + tab[i];
    }
  return res;
}

double moyenneTableau(int tab[], int size) {
  int res = 0;
  int i = 0;

    for (i = 0; i < size; i++) {
      res = res + tab[i];
    }
  res = res / size;
  return res;
}

void copierTableau(int tab1[], int tab2[], int size) {
  int i = 0;

    for (i = 0; i < size; i++) {
      tab2[i] = tab1[i];
    }
  return ;
}

void maximumTableau(int tab[], int size, int max) {
  int i = 0;

    for (i = 0; i < size; i++) {
      if (tab[i] > max)
	      tab[i] = 0;
    }
  return ;
}

// void ordonnerTableau(int tab1[], int size) {
//   int tab2[size] = {0};
//   int i = 0;
//
//   copierTableau(tab1, tab2, size);
// }
