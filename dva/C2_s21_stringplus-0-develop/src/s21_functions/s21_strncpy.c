//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  char *txt_dest = dest;
  while (*src && n) {
    *dest++ = *src++;
    n--;
  }
  while (n--) {
    *dest++ = '\0';
  }
  return txt_dest;
}
// Копирует до n символов из строки, на которую указывает src, в dest