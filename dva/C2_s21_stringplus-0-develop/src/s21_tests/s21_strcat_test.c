//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strncat_test1) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  const char *src1 = "test";
  size_t n1 = 3;
  ck_assert_str_eq(strncat(text_one, src1, n1),
                   s21_strncat(text_two, src1, n1));
}
END_TEST

START_TEST(strncat_test2) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  const char *src2 = "qwertyuiopasdfghjklzxcvbnm";
  size_t n2 = 9;
  ck_assert_str_eq(strncat(text_one, src2, n2),
                   s21_strncat(text_two, src2, n2));
}
END_TEST

START_TEST(strncat_test3) {
  char text_three[30] = "";
  char text_four[30] = "";
  const char *src3 = "";
  size_t n2 = 9;
  ck_assert_str_eq(strncat(text_three, src3, n2),
                   s21_strncat(text_four, src3, n2));
}
END_TEST

Suite *suite_strncat(void) {
  Suite *s = suite_create("strncat_test");
  TCase *tc = tcase_create("strncat_test_case");

  tcase_add_test(tc, strncat_test1);
  tcase_add_test(tc, strncat_test2);
  tcase_add_test(tc, strncat_test3);

  suite_add_tcase(s, tc);
  return s;
}