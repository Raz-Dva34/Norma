//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strncpy_test1) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  char *src = "test";
  size_t n = 3;
  ck_assert_str_eq(strncpy(text_one, src, n), s21_strncpy(text_two, src, n));
}
END_TEST

START_TEST(strncpy_test2) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  size_t n = 3;
  ck_assert_str_eq(strncpy(text_one, "src", n),
                   s21_strncpy(text_two, "src", n));
}
END_TEST

START_TEST(strncpy_test3) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  ck_assert_str_eq(strncpy(text_one, "Pam Pam Pam-Rapapam", 20),
                   s21_strncpy(text_two, "Pam Pam Pam-Rapapam", 20));
}
END_TEST

START_TEST(strncpy_test4) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  ck_assert_str_eq(strncpy(text_one, "", 12), s21_strncpy(text_two, "", 12));
}
END_TEST

Suite *suite_strncpy(void) {
  Suite *s = suite_create("strncpy_test");
  TCase *tc = tcase_create("strncpy_test_case");

  tcase_add_test(tc, strncpy_test1);
  tcase_add_test(tc, strncpy_test2);
  tcase_add_test(tc, strncpy_test3);
  tcase_add_test(tc, strncpy_test4);

  suite_add_tcase(s, tc);
  return s;
}
