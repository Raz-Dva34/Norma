//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

s21_size_t s21_strspn(const char *str1, const char *str2) {
  // Вычисляет длину начального сегмента str1,
  // который полностью состоит из символов str2.
  s21_size_t result = 0;
  s21_size_t len1 = s21_strlen(str1);
  s21_size_t len2 = s21_strlen(str2);
  for (s21_size_t i = 0; i < len1; i++) {
    int fin = 0;
    for (s21_size_t j = 0; j < len2; j++) {
      if (str1[i] == str2[j]) {
        fin = 1;
        break;
      }
    }
    if (!fin) break;
    result++;
  }
  return result;
}
