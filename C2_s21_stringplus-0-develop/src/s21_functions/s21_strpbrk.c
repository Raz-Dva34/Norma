//
// Created by Killed Hizdahr on 23.01.2023.
//
#include "../s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  char *vivod = s21_NULL;
  for (const char *symbol1 = str1; *symbol1; symbol1++) {  //присваиваем
    for (const char *symbol2 = str2; *symbol2; symbol2++) {  //присваиваем
      if (*symbol1 == *symbol2) {  //сравниваем
        vivod = (char *)symbol1;
        break;
      }
    }
    if (vivod) {
      break;
    }
  }
  return vivod;
}
// Находит первый символ в строке str1,
// который соответствует любому символу,
// указанному в str2.