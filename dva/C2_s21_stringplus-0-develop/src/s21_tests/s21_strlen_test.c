//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strlen_test1) {
  char text_one[30] = "1324";
  ck_assert_int_eq(strlen(text_one), s21_strlen(text_one));
}
END_TEST

START_TEST(strlen_test2) {
  char text_two[30] = " !@#$%^&*()_+";
  ck_assert_int_eq(strlen(text_two), s21_strlen(text_two));
}
END_TEST

START_TEST(strlen_test3) {
  char text_three[30] = "ROW!ROW!";
  ck_assert_int_eq(strlen(text_three), s21_strlen(text_three));
}
END_TEST

START_TEST(strlen_test4) {
  char text_four[30] = "";
  ck_assert_int_eq(strlen(text_four), s21_strlen(text_four));
}
END_TEST

START_TEST(strlen_test5) {
  char text_five[30] = "    ";  // 4 пробела
  ck_assert_int_eq(strlen(text_five), s21_strlen(text_five));
}
END_TEST

Suite *suite_strlen(void) {
  Suite *s = suite_create("strlen_test");
  TCase *tc = tcase_create("strlen_test_case");

  tcase_add_test(tc, strlen_test1);
  tcase_add_test(tc, strlen_test2);
  tcase_add_test(tc, strlen_test3);
  tcase_add_test(tc, strlen_test4);
  tcase_add_test(tc, strlen_test5);

  suite_add_tcase(s, tc);
  return s;
}
