//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

char *s21_strcpy(char *dest, const char *src) {
  s21_size_t cpy_counter = 0;
  for (; src[cpy_counter] != '\0';
       cpy_counter++) {  //проходим и записываем в dest
    dest[cpy_counter] = src[cpy_counter];
  }
  dest[cpy_counter] = '\0';
  return dest;
}
// Копирует строку, на которую указывает src, в dest.