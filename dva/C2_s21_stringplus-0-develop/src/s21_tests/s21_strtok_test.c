//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strtok_test1) {
  char str[30] = "dfaghs8da111adf56756w7ghedh";
  char *delim = "8";
  ck_assert_str_eq(strtok(str, delim), s21_strtok(str, delim));
}
END_TEST

START_TEST(strtok_test2) {
  char str1[30] = "dfaghs8da111adf56756wa7ghedh";
  char *delim1 = "3";
  ck_assert_str_eq(strtok(str1, delim1), s21_strtok(str1, delim1));
}
END_TEST

START_TEST(strtok_test3) {
  char str2[30] = "";
  char *delim2 = "3";
  ck_assert_ptr_eq(strtok(str2, delim2), s21_strtok(str2, delim2));
}
END_TEST

START_TEST(strtok_test4) {
  char str3[30] = "dfaghs8da111adf56756wa7ghedh";
  char *delim3 = "";
  ck_assert_str_eq(strtok(str3, delim3), s21_strtok(str3, delim3));
}
END_TEST

START_TEST(strtok_test5) {
  char str4[30] = "";
  char *delim4 = "";
  ck_assert_ptr_eq(strtok(str4, delim4), s21_strtok(str4, delim4));
}
END_TEST

Suite *suite_strtok(void) {
  Suite *s = suite_create("strtok_test");
  TCase *tc = tcase_create("strtok_test_case");

  tcase_add_test(tc, strtok_test1);
  tcase_add_test(tc, strtok_test2);
  tcase_add_test(tc, strtok_test3);
  tcase_add_test(tc, strtok_test4);
  tcase_add_test(tc, strtok_test5);

  suite_add_tcase(s, tc);
  return s;
}
