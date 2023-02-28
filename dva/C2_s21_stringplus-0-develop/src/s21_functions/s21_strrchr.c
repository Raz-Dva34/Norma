//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *vivod = s21_NULL;
  int i = 0;
  for (; str[i]; i++) {
    if (str[i] == c) {
      vivod = (char *)str + i;
    }
  }
  if (c == '\0') {
    vivod = (char *)str + i;
  }
  return vivod;
}
// Выполняет поиск последнего вхождения символа c (беззнаковый тип) в строке,
// на которую указывает аргумент str.