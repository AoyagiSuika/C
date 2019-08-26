/**
 * @Author: Dahak Déborah <suika>
 * @Date:   26-08-2019
 * @Email:  dahak.deborah@gmail.com
 * @Project: Reprise
 * @Filename: lib.h
 * @Last modified by:   suika
 * @Last modified time: 26-08-2019
 */

#ifndef OCTOLIB_H_
#define OCTOLIB_H_

int my_strlen(const char *);
int my_strcmp(const char *, const char *);
int my_strncmp(const char *, const char *, int);
int my_str_isupper(char *);
int my_str_islower(char *);
int my_str_isalpha(char *);
int my_str_isnum(char *);
int my_str_isprintable(char *);
char *my_strcpy(char *, char*);
char *my_strncpy(char *, char *, int);
char *my_strcat(char *, const char *);
char *my_strncat(char *, const char *, int);
char *my_strchr(char *, int);
char *my_strstr(char *, const char *);
void epur_str(char *, char);

#endif /* !OCTOLIB_H_ */
