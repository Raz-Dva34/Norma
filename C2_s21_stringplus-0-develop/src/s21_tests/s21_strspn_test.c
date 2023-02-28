//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strcspn_test1) {
  char str[10] = "0123456789";
  char sym[10] = "9876";
  ck_assert_int_eq(strcspn(str, sym), s21_strcspn(str, sym));
}
END_TEST

START_TEST(strcspn_test2) {
  char str1[10] = "";
  char sym1[10] = "9876";
  ck_assert_int_eq(strcspn(str1, sym1), s21_strcspn(str1, sym1));
}
END_TEST

START_TEST(strcspn_test3) {
  char str2[10] = "0123456789";
  char sym2[10] = "";
  ck_assert_int_eq(strcspn(str2, sym2), s21_strcspn(str2, sym2));
}
END_TEST

Suite *suite_strcspn(void) {
  Suite *s = suite_create("strcspn_test");
  TCase *tc = tcase_create("strcspn_test_case");

  tcase_add_test(tc, strcspn_test1);
  tcase_add_test(tc, strcspn_test2);
  tcase_add_test(tc, strcspn_test3);

  suite_add_tcase(s, tc);
  return s;
}
