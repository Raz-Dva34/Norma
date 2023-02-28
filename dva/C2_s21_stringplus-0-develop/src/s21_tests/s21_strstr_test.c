//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strstr_test1) {
  char text_one[30] = "13t24";
  char text_two[30] = "t";
  ck_assert_str_eq(strstr(text_one, text_two), s21_strstr(text_one, text_two));
}
END_TEST

START_TEST(strstr_test2) {
  ck_assert_str_eq(strstr("", ""), s21_strstr("", ""));
}
END_TEST

START_TEST(strstr_test3) {
  ck_assert_str_eq(strstr("tut_text", ""), s21_strstr("tut_text", ""));
}
END_TEST

START_TEST(strstr_test4) {
  ck_assert_ptr_eq(strstr("", "tut_text"), s21_strstr("", "tut_text"));
}
END_TEST

START_TEST(strstr_test5) {
  ck_assert_str_eq(strstr("tut_text", "tut"), s21_strstr("tut_text", "tut"));
}
END_TEST

Suite *suite_strstr(void) {
  Suite *s = suite_create("strstr_test");
  TCase *tc = tcase_create("strstr_test_case");

  tcase_add_test(tc, strstr_test1);
  tcase_add_test(tc, strstr_test2);
  tcase_add_test(tc, strstr_test3);
  tcase_add_test(tc, strstr_test4);
  tcase_add_test(tc, strstr_test5);

  suite_add_tcase(s, tc);
  return s;
}
