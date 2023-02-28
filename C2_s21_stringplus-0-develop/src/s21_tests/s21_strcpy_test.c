//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strcpy_test1) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  char *src = "test";
  ck_assert_str_eq(strcpy(text_one, src), s21_strcpy(text_two, src));
}
END_TEST

START_TEST(strcpy_test2) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  ck_assert_str_eq(strcpy(text_one, "src"), s21_strcpy(text_two, "src"));
}
END_TEST

START_TEST(strcpy_test3) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  ck_assert_str_eq(strcpy(text_one, ""), s21_strcpy(text_two, ""));
}
END_TEST

START_TEST(strcpy_test4) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  ck_assert_str_eq(strcpy(text_one, "W A S S S A A A !"),
                   s21_strcpy(text_two, "W A S S S A A A !"));
}
END_TEST

START_TEST(strcpy_test5) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  ck_assert_str_eq(strcpy(text_one, " !@#$%^&*()"),
                   s21_strcpy(text_two, " !@#$%^&*()"));
}
END_TEST

Suite *suite_strcpy(void) {
  Suite *s = suite_create("strcpy_test");
  TCase *tc = tcase_create("strcpy_test_case");

  tcase_add_test(tc, strcpy_test1);
  tcase_add_test(tc, strcpy_test2);
  tcase_add_test(tc, strcpy_test3);
  tcase_add_test(tc, strcpy_test4);
  tcase_add_test(tc, strcpy_test5);

  suite_add_tcase(s, tc);
  return s;
}