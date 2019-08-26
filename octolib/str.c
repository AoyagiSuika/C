/**
 * @Author: Dahak Déborah <suika>
 * @Date:   26-08-2019
 * @Email:  dahak.deborah@gmail.com
 * @Project: Reprise
 * @Filename: strlen.c
 * @Last modified by:   suika
 * @Last modified time: 26-08-2019
 */

#include <stdio.h>

int my_strlen(const char *str) {
  int i = 0;

  while (str[i] != 0) {
    i++;
  }
  return i;
}

char *my_strcpy(char *dest, const char *src) {
  int i = 0;

  do {
    dest[i] = src[i];
    i++;
  } while (src[i] != 0);
  return dest;
}

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

void epur_str(char *str, char sep) {
  int i = 0;
  int j = 0;

  for (i = 0; str[i] != 0; i++) {
    j = 0;
    if (str[i] == sep)
      j = i;
      while (str[j] != 0) {
        str[j] = str[j + 1];
        j++;
      }
  }
  printf("epur_str : %s\n", str);
  return ;
}
