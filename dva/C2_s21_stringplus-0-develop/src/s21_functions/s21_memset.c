//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

void *s21_memset(void *str, int c, s21_size_t n) {
  // Копирует символ c (беззнаковый тип) в первые n символов строки,
  // на которую указывает аргумент str.
  char *text = (char *)str;
  for (s21_size_t i = 0; i < n; i++) {
    text[i] = c;
  }
  return str;
}