//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strcat_test1) {
  char text_one[500] = "1324";
  char text_two[500] = "1324";
  ck_assert_str_eq(strcat(text_one, "test"), s21_strcat(text_two, "test"));
}
END_TEST

START_TEST(strcat_test2) {
  char text_one[500] = "1324";
  char text_two[500] = "1324";
  ck_assert_str_eq(strcat(text_one, " test"), s21_strcat(text_two, " test"));
}
END_TEST

START_TEST(strcat_test3) {
  char text_one[500] = "1324";
  char text_two[500] = "1324";
  ck_assert_str_eq(strcat(text_one, " @!#$%^&*()"),
                   s21_strcat(text_two, " @!#$%^&*()"));
}
END_TEST

START_TEST(strcat_test4) {
  char text_one[500] = "1324";
  char text_two[500] = "1324";
  ck_assert_str_eq(strcat(text_one, "W A S S S A A A !"),
                   s21_strcat(text_two, "W A S S S A A A !"));
}
END_TEST

Suite *suite_strcat(void) {
  Suite *s = suite_create("strcat_test");
  TCase *tc = tcase_create("strcat_test_case");

  tcase_add_test(tc, strcat_test1);
  tcase_add_test(tc, strcat_test2);
  tcase_add_test(tc, strcat_test3);
  tcase_add_test(tc, strcat_test4);

  suite_add_tcase(s, tc);
  return s;
}
