#include "../s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int size = 0;
  unsigned int ch = 0;
  int flag = 0;
  while (flag == 0 && ch < n) {
    if (str1[ch] != str2[ch]) {
      size = str1[ch] - str2[ch];
      flag = 1;
    }
    if (str1[ch] == '\0' && str2[ch] == '\0') {
      flag = 1;
    }
    ch++;
  }
  return size;
}