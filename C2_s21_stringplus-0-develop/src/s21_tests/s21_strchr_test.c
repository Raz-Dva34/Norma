//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strchr_test1) {
  char *str_1 = "0123456789";
  ck_assert_str_eq(strchr(str_1, '6'), s21_strchr(str_1, '6'));
}
END_TEST

START_TEST(strchr_test2) {
  char *str_2 = "";
  ck_assert_ptr_eq(strchr(str_2, '6'), s21_strchr(str_2, '6'));
}
END_TEST

START_TEST(strchr_test3) {
  char *str_3 = "012346789";
  ck_assert_ptr_eq(strchr(str_3, '5'), s21_strchr(str_3, '5'));
}
END_TEST

START_TEST(strchr_test4) {
  char *str_4 = "dfaghs8da111adf56756wa7ghedh";
  ck_assert_str_eq(strchr(str_4, '8'), s21_strchr(str_4, '8'));
}
END_TEST

Suite *suite_strchr(void) {
  Suite *s = suite_create("strchr_test");
  TCase *tc = tcase_create("strchr_test_case");

  tcase_add_test(tc, strchr_test1);
  tcase_add_test(tc, strchr_test2);
  tcase_add_test(tc, strchr_test3);
  tcase_add_test(tc, strchr_test4);

  suite_add_tcase(s, tc);
  return s;
}