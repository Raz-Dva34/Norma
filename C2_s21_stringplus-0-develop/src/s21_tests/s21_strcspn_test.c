//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strspn_test1) {
  char str[10] = "0123456789";
  char sym[10] = "210";
  ck_assert_int_eq(strspn(str, sym), s21_strspn(str, sym));
}
END_TEST

START_TEST(strspn_test2) {
  char str1[10] = "";
  char sym1[10] = "210";
  ck_assert_int_eq(strspn(str1, sym1), s21_strspn(str1, sym1));
}
END_TEST

START_TEST(strspn_test3) {
  char str2[10] = "0123456789";
  char sym2[10] = "";
  ck_assert_int_eq(strspn(str2, sym2), s21_strspn(str2, sym2));
}
END_TEST

Suite *suite_strspn(void) {
  Suite *s = suite_create("strspn_test");
  TCase *tc = tcase_create("strspn_test_case");

  tcase_add_test(tc, strspn_test1);
  tcase_add_test(tc, strspn_test2);
  tcase_add_test(tc, strspn_test3);

  suite_add_tcase(s, tc);
  return s;
}