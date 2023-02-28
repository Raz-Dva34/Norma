//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

char *s21_strcat(char *dest, const char *src) {
  s21_size_t dest_count = 0;
  s21_size_t src_count = 0;
  for (; dest[dest_count] != '\0'; dest_count++) {  //долетает в конец строки
  }
  for (; src[src_count] != '\0'; src_count++) {
    dest[dest_count + src_count] = src[src_count];  //пихаем src в конец dest
  }
  dest[dest_count + src_count] = '\0';  //завершаем
  return dest;
}
// Добавляет строку, на которую указывает src, в конец строки,
// на которую указывает dest.