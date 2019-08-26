/**
 * @Author: Dahak Déborah <suika>
 * @Date:   23-08-2019
 * @Email:  dahak.deborah@gmail.com
 * @Project: Reprise
 * @Filename: menu.c
 * @Last modified by:   suika
 * @Last modified time: 26-08-2019
 */

#include <stdio.h>

int main() {
  int choix = 0;

  printf("=== Menu ===\n");
  printf("1. Royal Cheese\n");
  printf("2. Mc Deluxe\n");
  printf("3. Mc Bacon\n");
  printf("4. Big Mac\n");
  printf("Votre choix ?\n");
  scanf("%d", &choix);
    switch(choix) {
      case 1:
      printf("Vous avez choisi le menu Royal Cheese.\n");
      break;
      case 2:
      printf("Vous avez choisi le menu Mc Deluxe.\n");
      break;
      case 3:
      printf("Vous avez choisi le menu Mc Bacon.\n");
      break;
      case 4:
      printf("Vous avez choisi le menu Big Mac.\n");
      break;
      default :
      printf("Vous n'avez pas choisi de menu valide.\n");
      break;
    }
  return 0;
}
