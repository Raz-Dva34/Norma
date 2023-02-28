//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strerror_test1) {
  char *case1 = s21_strerror(0);
  char *case2 = strerror(0);
  ck_assert_uint_eq((unsigned long)*case1, (unsigned long)*case2);
}
END_TEST

START_TEST(strerror_test2) {
  char *case9 = s21_strerror(1);
  char *case10 = strerror(1);
  ck_assert_uint_eq((unsigned long)*case9, (unsigned long)*case10);
}
END_TEST

START_TEST(strerror_test3) {
  char *case0 = s21_strerror(55);
  char *case3 = strerror(55);
  ck_assert_uint_eq((unsigned long)*case0, (unsigned long)*case3);
}
END_TEST

START_TEST(strerror_test4) {
  char *case7 = s21_strerror(132);
  char *case8 = strerror(132);
  ck_assert_uint_eq((unsigned long)*case7, (unsigned long)*case8);
}
END_TEST

START_TEST(strerror_test5) {
  char *case5 = s21_strerror(350);
  char *case6 = strerror(350);
  ck_assert_uint_eq((unsigned long)*case5, (unsigned long)*case6);
}
END_TEST

START_TEST(strerror_test6) {
  char *case11 = s21_strerror(-1);
  char *case12 = strerror(-1);
  ck_assert_uint_eq((unsigned long)*case11, (unsigned long)*case12);
}
END_TEST

Suite *suite_strerror(void) {
  Suite *s = suite_create("strerror_test");
  TCase *tc = tcase_create("strerror_test_case");

  tcase_add_test(tc, strerror_test1);
  tcase_add_test(tc, strerror_test2);
  tcase_add_test(tc, strerror_test3);
  tcase_add_test(tc, strerror_test4);
  tcase_add_test(tc, strerror_test5);
  tcase_add_test(tc, strerror_test6);

  suite_add_tcase(s, tc);
  return s;
}