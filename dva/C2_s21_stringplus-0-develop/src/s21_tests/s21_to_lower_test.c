//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(to_lower_test1) {
  char text_one[] = "LUCKY STAR";
  char text_two[] = "lucky star";
  char *got = s21_to_lower(text_one);
  ck_assert_str_eq(got, text_two);
  if (got) free(got);
}
END_TEST

START_TEST(to_lower_test2) {
  char text_one1[] = "PRO100PRO";
  char text_two1[] = "pro100pro";
  char *got1 = s21_to_lower(text_one1);
  ck_assert_str_eq(got1, text_two1);
  if (got1) free(got1);
}
END_TEST

Suite *suite_to_lower(void) {
  Suite *s = suite_create("to_lower_test");
  TCase *tc = tcase_create("to_lower_test_case");

  tcase_add_test(tc, to_lower_test1);
  tcase_add_test(tc, to_lower_test2);

  suite_add_tcase(s, tc);
  return s;
}
