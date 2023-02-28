//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(to_upper_test1) {
  char text_one[] = "string plus";
  char text_two[] = "STRING PLUS";
  char *got = s21_to_upper(text_one);
  ck_assert_str_eq(got, text_two);
  if (got) free(got);
}
END_TEST

START_TEST(to_upper_test2) {
  char text_one1[] = "nety interesa dokazivat 4to-to *******";
  char text_two1[] = "NETY INTERESA DOKAZIVAT 4TO-TO *******";
  char *got1 = s21_to_upper(text_one1);
  ck_assert_str_eq(got1, text_two1);
  if (got1) free(got1);
}
END_TEST

Suite *suite_to_upper(void) {
  Suite *s = suite_create("to_upper_test");
  TCase *tc = tcase_create("to_upper_test_case");

  tcase_add_test(tc, to_upper_test1);
  tcase_add_test(tc, to_upper_test2);

  suite_add_tcase(s, tc);
  return s;
}
