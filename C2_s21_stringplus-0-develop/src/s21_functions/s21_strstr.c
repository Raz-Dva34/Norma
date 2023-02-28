//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  char *res = s21_NULL;
  s21_size_t size_haystack = s21_strlen(haystack);
  s21_size_t size_needle = s21_strlen(needle);
  if (size_haystack >= size_needle) {
    for (s21_size_t i = 0; i <= (size_haystack - size_needle); i++) {
      int found = 1;
      for (s21_size_t j = i, k = 0; needle[k]; k++, j++) {
        if (haystack[j] != needle[k]) {
          found = 0;
          break;
        }
      }
      if (found) {
        res = (char *)haystack + i;
        break;
      }
    }
  }
  return res;
}
// Находит первое вхождение всей строки needle
// (не включая завершающий нулевой символ),
// которая появляется в строке haystack.