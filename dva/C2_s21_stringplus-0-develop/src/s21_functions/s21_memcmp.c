#include "../s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  const unsigned char *Str1 = (const unsigned char *)str1;
  const unsigned char *Str2 = (const unsigned char *)str2;
  int flag = 0;
  s21_size_t ch = 0;
  while (ch < n && flag == 0) {
    if (Str1[ch] != Str2[ch]) {
      flag = Str1[ch] - Str2[ch];
    }
    ch++;
  }
  return flag;
}