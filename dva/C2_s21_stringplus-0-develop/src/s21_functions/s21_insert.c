//
// Created by Killed Hizdahr on 30.01.2023.
//
#include "../s21_string.h"
void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  int index = start_index;
  char *new_str = NULL;
  if (src != NULL || (src == NULL && index == 0 && str != NULL)) {
    int src_len = src == NULL ? 0 : s21_strlen(src);
    if (index <= src_len) {
      int str_len = str == NULL ? 0 : s21_strlen(str);
      int tot_len = src_len + str_len;
      new_str = calloc(tot_len + 1, sizeof(char));
      if (new_str != NULL) {
        int i;
        for (i = 0; i < tot_len; i++) {
          if (i < index) {
            new_str[i] = src[i];
          } else if (i < str_len + index) {
            new_str[i] = str[i - index];
          } else {
            new_str[i] = src[i - str_len];
          }
        }
      }
    }
  }
  return new_str;
}

// Возвращает новую строку, в которой указанная строка (str)
// вставлена в указанную позицию (start_index) в данной строке (src).
// В случае какой-либо ошибки следует вернуть значение NULL
