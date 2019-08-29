/**
 * @Author: Dahak Déborah <suika>
 * @Date:   26-08-2019
 * @Email:  dahak.deborah@gmail.com
 * @Project: Reprise
 * @Filename: strlen.c
 * @Last modified by:   suika
 * @Last modified time: 29-08-2019
 */

#include <stdio.h>

/*
** Fonction qui compte le nombre de caractères dans une chaîne
*/

int my_strlen(const char *str) {
  int i = 0;

  while (str[i] != 0) {
    i++;
  }
  return i;
}

/*
** Fonction qui copie src dans dest
*/

char *my_strcpy(char *dest, const char *src) {
  int i = 0;

  do {
    dest[i] = src[i];
    i++;
  } while (src[i] != 0);
  return dest;
}

/*
** Fonction qui copie les n premiers caractères de src dans les
** n premiers caractères de dest
*/

char *my_strncpy(char *dest, const char *src, int n) {
  int i = 0;

  while (src[i] != 0 && i < n) {
    dest[i] = src[i];
    i++;
  }
  return dest;
}

/*
** Fonction qui concatène str1 et str2 dans str1
*/

char *my_strcat(char *str1, const char *str2) {
  int i = 0;
  int j = 0;

  while (str1[i] != 0) {
    i++;
  }
  do {
    str1[i] = str2[j];
    i++;
    j++;
  } while (str2[j] != 0);
  return str1;
}

/*
** Fonction qui concatène str1 et les n premiers caractères
** de str2
*/

char *my_strncat(char *str1, const char *str2, int n) {
  int i = 0;
  int j = 0;

  while (str1[i] != 0) {
    i++;
  }
  do {
    str1[i] = str2[j];
    i++;
    j++;
  } while (str2[j] != 0 && j < n);
  return str1;
}

/*
** Fonction qui compare str1 à str2 et renvoie 0 si elles
** sont identiques
*/

int my_strcmp(const char *str1, const char *str2) {
  int i = 0;

  while (str1[i] == str2[i] && str1[i] != 0 && str2[i] != 0) {
    i++;
    if (str1[i] != str2[i])
      return 1;
  }
  if (i == 0 && str1[0] != str2[0])
    return 1;
  else
    return 0;
}

/*
** Fonction qui compare les n premiers caractères de str1 et str2
** et renvoie 0 s'ils sont identiques
*/

int my_strncmp(const char *str1, const char *str2, int n) {
  int i = 0;

  while (str1[i] == str2[i] && str1[i] != 0 && str2[i] != 0 && i < (n - 1)) {
    i++;
    if (str1[i] != str2[i])
      return 1;
  }
  if (i == 0 && str1[0] != str2[0])
    return 1;
  else
    return 0;
}

/*
** Fonction qui cherche cha dans str et renvoie l'adresse de sa
** première occurence ou NULL si elle ne l'a pas trouvé
*/

char *my_strchr(char *str, int cha) {
  int i = 0;

  do {
    if (str[i] == cha)
      return &str[i];
    i++;
  } while (str[i] != 0);
  if (str[i] == cha)
    return &str[i];
  return NULL;
}

/*
** Fonction qui cherche rec dans str et renvoie l'adresse de sa
** première occurence ou NULL si elle ne l'a pas trouvée
*/

char *my_strstr(char *str, const char *rec) {
  int i = 0;
  int j = 0;
  int k = 0;

  for (i = 0; str[i] != 0; i++) {
    j = 0;
    if (str[i] == rec[j])
      k++;
      k = i;
      while ((str[i] == rec[j]) && (rec[j] != 0) & (str[i] != 0)) {
        i++;
        j++;
      }
      if (rec[j] == 0)
        return &str[k];
      else
        j = 0;
        i = k;
        k = 0;
  }
  return NULL;
}

/*
** Fonction qui retire toutes les occurences de sep dans str
*/

void epur_str(char *str, char sep) {
  int i = 0;
  int j = 0;

  for (i = 0; str[i] != 0; i++) {
    j = 0;
    for (j = 0; str[i] == sep; j = i) {
      j = i;
      while (str[j] != 0) {
        str[j] = str[j + 1];
        j++;
      }
    }
  }
  return ;
}

/*
** Fonction qui renvoie 0 si str est en majuscules
*/

int my_str_isupper(char *str) {
  int i = 0;
  int res = 0;

  for (i = 0; str[i] != 0; i++) {
    if (!(str[i] >= 97 && str[i] <= 122)) {
      res++;
    }
  }
  if (res == i) {
    return 0;
  }
  else
    return 1;
}

/*
** Fonction qui renvoie 0 si str est en minuscule
*/

int my_str_islower(char *str) {
  int i = 0;
  int res = 0;

  for (i = 0; str[i] != 0; i++) {
    if (!(str[i] >= 65 && str[i] <= 90)) {
      res++;
    }
  }
  if (res == i) {
    return 0;
  }
  else
    return 1;
}

/*
** Fonction qui renvoie 0 si str est alphanumérique
*/

int my_str_isalpha(char *str) {
  int i = 0;
  int j = 0;

  while (i < my_strlen(str)) {
    if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90) || (str[i] >= 48 && str[i] <= 57)) {
      j++;
    }
    i++;
    }
  if (j == my_strlen(str))
    return (0);
  else
    return (1);
}

/*
** Fonction qui renvoie 0 si str est numérique
*/

int my_str_isnum(char *str)
{
  int i = 0;
  int j = 0;

  while (i < my_strlen(str))
    {
      if ((str[i] >= 48 && str[i] <= 58)) {
	       j++;
       }
      i++;
    }
  if (j == my_strlen(str))
    return (0);
  else
    return (1);
}

/*
** Fonction qui renvoie 0 si str est imprimable
*/

int my_str_isprintable(char *str) {
  int i = 0;
  int j = 0;

  while (i < my_strlen(str)) {
      if ((str[i] >= 32 && str[i] <= 126)) {
	      j++;
       }
      i++;
    }
  if (j == my_strlen(str))
    return (0);
  else
    return (1);
}

void my_strupcase(char *str) {
  int i = 0;

  for (i = 0; i < my_strlen(str); i++) {
    if (str[i] >= 97 && str[i] <= 122) {
      str[i] += 32;
    }
    i++;
  }
  return ;
}

void my_strlowcase(char *str) {
  int i = 0;

  for (i = 0; i < my_strlen(str); i++) {
    if (str[i] >= 65 && str[i] <= 90) {
      str[i] -= 32;
    }
    i++;
  }
  return ;
}
