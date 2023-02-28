//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

s21_size_t s21_strlen(const char *str) {
  s21_size_t len_counter = 0;
  while (*str++ != '\0') {
    len_counter++;
  }
  return len_counter;
}
// Вычисляет длину строки str,
// не включая завершающий нулевой символ.