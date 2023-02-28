//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  // Разбивает строку str на ряд токенов, разделенных delim.
  static char *new = s21_NULL;
  int flag = 0;
  if (!str) str = new;
  if (str != s21_NULL) {
    new = str;
    str += s21_strspn(str, delim);
    if (s21_strlen(str) == 0) flag = -1;
  }
  if (flag == 0) {
    new = str + s21_strcspn(str, delim);
    if (*new != '\0') *new = '\0';
    new ++;
  }
  return flag == -1 ? s21_NULL : str;
}
