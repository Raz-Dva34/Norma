//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(trim_test1) {
  char text_one[] = "    probel    ";
  char text_two[] = " ";
  char text_three[] = "probel";
  char *got = s21_trim(text_one, text_two);
  ck_assert_str_eq(got, text_three);
  if (got) free(got);
}
END_TEST

START_TEST(trim_test2) {
  char text_one1[] = "Odinakoviy text 4U";
  char *text_two1 = s21_NULL;
  char text_three1[] = "Odinakoviy text 4U";
  char *got1 = s21_trim(text_one1, text_two1);
  ck_assert_str_eq(got1, text_three1);
  if (got1) free(got1);
}
END_TEST

Suite *suite_trim(void) {
  Suite *s = suite_create("trim_test");
  TCase *tc = tcase_create("trim_test_case");

  tcase_add_test(tc, trim_test1);
  tcase_add_test(tc, trim_test2);

  suite_add_tcase(s, tc);
  return s;
}
