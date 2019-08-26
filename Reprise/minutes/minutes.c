/**
 * @Author: Dahak Déborah <suika>
 * @Date:   23-08-2019
 * @Email:  dahak.deborah@gmail.com
 * @Project: Reprise
 * @Filename: minutes.c
 * @Last modified by:   suika
 * @Last modified time: 26-08-2019
 */

#include <stdio.h>

void minutes(int *h, int *m) {
  *h = *m/60;
  *m = *m%60;
  return ;
}

int main() {
  int h = 0, m = 90;
  minutes(&h, &m);
  printf("%d heures et %d minutes.\n", h, m);
  return 0;
}
