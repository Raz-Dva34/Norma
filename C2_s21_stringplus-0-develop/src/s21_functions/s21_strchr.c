//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

char *s21_strchr(const char *str, int c) {
  // Ищет в строке str первое вхождение символа c, начиная с начала строки.
  // В случае успеха возвращает указатель на найденный символ,
  // иначе возвращает нуль.
  s21_size_t i = 0;
  while (str[i] && str[i] != c) i++;
  return str[i] == c ? (char *)str + i : s21_NULL;
}
