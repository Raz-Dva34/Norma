//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(memchr_test1) {
  unsigned char src[11] = "123567890";
  unsigned char a = '3';
  int b = 5;
  ck_assert_str_eq(memchr(src, a, b), s21_memchr(src, a, b));
}
END_TEST

START_TEST(memchr_test2) {
  unsigned char src[11] = "123567890";
    unsigned char a = '9';
    int b = 5;
    ck_assert_ptr_eq(memchr(src, a, b), s21_memchr(src, a, b));
}
END_TEST

START_TEST(memchr_test3) {
  unsigned char src[11] = "123567890";
    unsigned char a = '4';
    int b = 11;
    ck_assert_ptr_eq(memchr(src, a, b), s21_memchr(src, a, b));
}
END_TEST

Suite *suite_memchr(void) {
  Suite *s = suite_create("memchr_test");
  TCase *tc = tcase_create("memchr_test_case");

  tcase_add_test(tc, memchr_test1);
  tcase_add_test(tc, memchr_test2);
  tcase_add_test(tc, memchr_test3);

  suite_add_tcase(s, tc);
  return s;
}