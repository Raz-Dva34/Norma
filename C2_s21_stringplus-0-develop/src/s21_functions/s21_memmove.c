//
// Created by Killed Hizdahr on 23.01.2023.
//

#include "../s21_string.h"

void *s21_memmove(void *dest, const void *src,
                  s21_size_t n) {  // массивы могут пересекаться
  // Еще одна функция для копирования n символов из src в dest.
  char *tes_dest = (char *)dest;
  char *tes_src = (char *)src;
  s21_size_t i = 0;
  if (dest <= src) {
    for (; i < n; i++) tes_dest[i] = tes_src[i];
  } else {
    for (i = n; i > 0; i--) tes_dest[i - 1] = tes_src[i - 1];
  }
  return dest;
}
