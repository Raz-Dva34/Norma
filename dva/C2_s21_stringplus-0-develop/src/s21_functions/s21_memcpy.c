//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  // массивы не должны пересекаться
  // Копирует n символов из src в dest.
  unsigned char *ndest = (unsigned char *)dest;
  unsigned char *nsrc = (unsigned char *)src;
  for (s21_size_t i = 0; i < n; i++) {
    ndest[i] = nsrc[i];
  }
  return dest;
}
