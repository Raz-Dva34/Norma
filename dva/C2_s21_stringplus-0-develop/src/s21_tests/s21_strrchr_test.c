//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strrchr_test1) {
  char *str = "13t24";
  ck_assert_str_eq(s21_strrchr(str, 't'), strrchr(str, 't'));
}
END_TEST

START_TEST(strrchr_test2) {
  char *str = "13t24";
  ck_assert_str_eq(s21_strrchr(str, '2'), strrchr(str, '2'));
}
END_TEST

START_TEST(strrchr_test3) {
  char *str = "13t24";
  ck_assert_ptr_eq(s21_strrchr(str, '9'), strrchr(str, '9'));
}
END_TEST

START_TEST(strrchr_test4) {
  char *str1 = "";
  ck_assert_ptr_eq(s21_strrchr(str1, '2'), strrchr(str1, '2'));
}
END_TEST

START_TEST(strrchr_test5) {
  char *str2 = "\0f";
  ck_assert_ptr_eq(s21_strrchr(str2, '\0'), strrchr(str2, '\0'));
}
END_TEST

START_TEST(strrchr_test6) {
  char *str2 = "\0f";
  ck_assert_ptr_eq(s21_strrchr(str2, 'f'), strrchr(str2, 'f'));
}
END_TEST

Suite *suite_strrchr(void) {
  Suite *s = suite_create("strrchr_test");
  TCase *tc = tcase_create("strrchr_test_case");

  tcase_add_test(tc, strrchr_test1);
  tcase_add_test(tc, strrchr_test2);
  tcase_add_test(tc, strrchr_test3);
  tcase_add_test(tc, strrchr_test4);
  tcase_add_test(tc, strrchr_test5);
  tcase_add_test(tc, strrchr_test6);

  suite_add_tcase(s, tc);
  return s;
}
