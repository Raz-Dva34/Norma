//
// Created by Killed Hizdahr on 19.01.2023.
//

#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#define s21_size_t \
  unsigned long long  // целое беззнаковое число, которое используется, когда
                      // речь идет о размерах
#define s21_NULL \
  (void *)0  // Мы кастуем 0 в тип void* (пустой указатель), таким образом
             // указатель не имеет тип (т.к. он void) и указывает на ноль.

// #include <ctype.h>
#include <locale.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
// #include <wchar.h>

#include "./s21_functions/s21_sprintf.h"

#define BUFF_SIZE 512

void *s21_memchr(const void *str, int c,
                 s21_size_t n);  // Выполняет поиск первого вхождения символа c
                                 // (беззнаковый тип) в первых n байтах строки,
                                 // на которую указывает аргумент str.
int s21_memcmp(const void *str1, const void *str2,
               s21_size_t n);  // Сравнивает первые n байтов str1 и str2.
void *s21_memcpy(void *dest, const void *src,
                 s21_size_t n);  // Копирует n символов из src в dest.
void *s21_memmove(void *dest, const void *src,
                  s21_size_t n);  // Еще одна функция для копирования n символов
                                  // из src в dest. (массивы могут пересекаться)
void *s21_memset(
    void *str, int c,
    s21_size_t n);  // Копирует символ c (беззнаковый тип) в первые n символов
                    // строки, на которую указывает аргумент str.
char *s21_strcat(
    char *dest,
    const char *src);  // Добавляет строку, на которую указывает src, в конец
                       // строки, на которую указывает dest.
char *s21_strncat(
    char *dest, const char *src,
    s21_size_t n);  // Добавляет строку, на которую указывает src, в конец
                    // строки, на которую указывает dest, длиной до n символов.
char *s21_strchr(
    const char *str,
    int c);  // Выполняет поиск первого вхождения символа c (беззнаковый тип) в
             // строке, на которую указывает аргумент str.
int s21_strcmp(
    const char *str1,
    const char *str2);  // Сравнивает строку, на которую указывает str1, со
                        // строкой, на которую указывает str2.
int s21_strncmp(
    const char *str1, const char *str2,
    s21_size_t n);  // Сравнивает не более первых n байтов str1 и str2.
char *s21_strcpy(
    char *dest,
    const char *src);  // Копирует строку, на которую указывает src, в dest.
char *s21_strncpy(char *dest, const char *src,
                  s21_size_t n);  // Копирует до n символов из строки, на
                                  // которую указывает src, в dest.
s21_size_t s21_strcspn(
    const char *str1,
    const char *str2);  // Вычисляет длину начального сегмента str1, который
                        // полностью состоит из символов, не входящих в str2.
char *s21_strerror(
    int errnum);  // Выполняет поиск во внутреннем массиве номера ошибки errnum
                  // и возвращает указатель на строку с сообщением об ошибке.
                  // Нужно объявить макросы, содержащие массивы сообщений об
                  // ошибке для операционных систем mac и linux. Описания ошибок
                  // есть в оригинальной библиотеке. Проверка текущей ОС
                  // осуществляется с помощью директив.
s21_size_t s21_strlen(const char *str);  // Вычисляет длину строки str, не
                                         // включая завершающий нулевой символ.
char *s21_strpbrk(
    const char *str1,
    const char *str2);  // Находит первый символ в строке str1, который
                        // соответствует любому символу, указанному в str2.
char *s21_strrchr(
    const char *str,
    int c);  // Выполняет поиск последнего вхождения символа c (беззнаковый тип)
             // в строке, на которую указывает аргумент str.
s21_size_t s21_strspn(
    const char *str1,
    const char *str2);  // Вычисляет длину начального сегмента str1, который
                        // полностью состоит из символов str2.
char *s21_strstr(
    const char *haystack,
    const char *needle);  // Находит первое вхождение всей строки needle (не
                          // включая завершающий нулевой символ), которая
                          // появляется в строке haystack.
char *s21_strtok(char *str, const char *delim);  // Разбивает строку str на ряд
                                                 // токенов, разделенных delim.
void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);

int s21_atoi(const char *str);

#endif  // SRC_S21_STRING_H_
