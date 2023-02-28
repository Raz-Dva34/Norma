//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  /*
  Выполняет поиск первого вхождения символа c
 (беззнаковый тип) в первых n байтах строки,
 на которую указывает аргумент str.
 */
  unsigned char *buff = s21_NULL;
  unsigned char *ptr = (unsigned char *)str;
  for (s21_size_t i = 0; i < n; i++) {
    if (*ptr == (unsigned char)c) {
      buff = ptr;
      break;
    } else {
      buff = s21_NULL;
    }
    ptr++;  // ???
  }
  return buff;
}
