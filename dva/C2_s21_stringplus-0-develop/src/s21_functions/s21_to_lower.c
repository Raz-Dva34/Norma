//
// Created by Killed Hizdahr on 30.01.2023.
//
#include "../s21_string.h"

void *s21_to_lower(const char *str) {
  char *box = s21_NULL;
  if (str) {
    s21_size_t volume = s21_strlen(str);
    box = (char *)calloc(volume, sizeof(char) + 1);
    if (box) {
      for (s21_size_t i = 0; i < volume; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {  // 65 90
          box[i] = str[i] + ('a' - 'A');       // 32
        } else {
          box[i] = str[i];
        }
      }
    }
  }
  return box;
}

//Возвращает копию строки (str), преобразованной в нижний регистр.
// В случае какой-либо ошибки следует вернуть значение NULL