//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(insert_test1) {
  char str[] = "Hello, ";
  char src[] = "Dedline!";
  s21_size_t index = 0;
  char expected[] = "Hello, Dedline!";
  char *got = s21_insert(src, str, index);
  ck_assert_str_eq(got, expected);
  if (got) {
    free(got);
  }
}
END_TEST

START_TEST(insert_test2) {
  char str[] = "";
  char src[] = "";
  s21_size_t index = 1000;
  char *expected = NULL;
  char *got = s21_insert(src, str, index);
  ck_assert_ptr_eq(got, expected);
  if (got) {
    free(got);
  }
}
END_TEST

START_TEST(insert_test3) {
  char str[] = "I You";
  char src[] = "";
  s21_size_t index = 0;
  char *expected = "I You";
  char *got = s21_insert(src, str, index);
  ck_assert_str_eq(got, expected);
  if (got) {
    free(got);
  }
}
END_TEST

START_TEST(insert_test4) {
  char *src = NULL;
  char *str = NULL;
  s21_size_t index = 100;
  char *expected = NULL;
  char *got = s21_insert(src, str, index);
  ck_assert_ptr_eq(got, expected);
  if (got) {
    free(got);
  }
}
END_TEST

START_TEST(insert_test5) {
  char str[] = "Monkey";
  char src[] = "Space  ";
  s21_size_t index = 6;
  char expected[] = "Space Monkey ";
  char *got = s21_insert(src, str, index);
  ck_assert_str_eq(got, expected);
  if (got) {
    free(got);
  }
}
END_TEST

START_TEST(insert_test6) {
  char *str = NULL;
  char src[] = "Space  ";
  s21_size_t index = 6;
  char expected[] = "Space  ";
  char *got = s21_insert(src, str, index);
  ck_assert_str_eq(got, expected);
  if (got) {
    free(got);
  }
}
END_TEST

Suite *suite_insert(void) {
  Suite *s = suite_create("insert_test");
  TCase *tc = tcase_create("insert_test_case");

  tcase_add_test(tc, insert_test1);
  tcase_add_test(tc, insert_test2);
  tcase_add_test(tc, insert_test3);
  tcase_add_test(tc, insert_test4);
  tcase_add_test(tc, insert_test5);
  tcase_add_test(tc, insert_test6);

  suite_add_tcase(s, tc);
  return s;
}