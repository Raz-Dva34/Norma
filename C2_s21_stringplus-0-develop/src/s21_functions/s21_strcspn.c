//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  // Вычисляет длину начального сегмента str1,
  // который полностью состоит из символов,
  // не входящих в str2.
  s21_size_t result = 0;
  while (*str1) {
    if (s21_strchr(str2, *str1)) {
      break;
    } else {
      str1++;
      result++;
    }
  }
  return result;
}
