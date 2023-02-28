//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strncmp_test1) {
  char test1[] = "Alexandra";
  char test2[] = "E m i l";
  ck_assert_int_eq(s21_strncmp(test1, test2, 5) == 0,
                   strncmp(test1, test2, 5) == 0);
}
END_TEST

START_TEST(strncmp_test2) {
  char test1[] = "Alexandra";
  char test2[] = "E m i l";
  ck_assert_int_eq(s21_strncmp(test1, test2, 6) > 0,
                   strncmp(test1, test2, 6) > 0);
}
END_TEST

START_TEST(strncmp_test3) {
  char test4[] = "";
  char test5[] = "";
  ck_assert_int_eq(s21_strncmp(test4, test5, 1) == 0,
                   strncmp(test4, test5, 1) == 0);
}
END_TEST

START_TEST(strncmp_test4) {
  char test1[] = "Alexandra";
  char test3[] = "Maks Ravshan\0";
  ck_assert_int_eq(s21_strncmp(test1, test3, 10) > 0,
                   strncmp(test1, test3, 10) > 0);
}
END_TEST

Suite *suite_strncmp(void) {
  Suite *s = suite_create("strncmp_test");
  TCase *tc = tcase_create("strncmp_test_case");

  tcase_add_test(tc, strncmp_test1);
  tcase_add_test(tc, strncmp_test2);
  tcase_add_test(tc, strncmp_test3);
  tcase_add_test(tc, strncmp_test4);

  suite_add_tcase(s, tc);
  return s;
}
