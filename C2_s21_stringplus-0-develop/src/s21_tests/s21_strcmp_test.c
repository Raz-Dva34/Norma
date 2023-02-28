//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strcmp_test1) {
  char test1[] = "0123456789";
  char test2[] = "0123456789";
  ck_assert_uint_eq(s21_strcmp(test1, test2) == 0, strcmp(test1, test2) == 0);
}
END_TEST

START_TEST(strcmp_test2) {
  char test1[] = "0123456789";
  char test3[] = "\0";
  ck_assert_uint_eq(s21_strcmp(test1, test3) > 0, strcmp(test1, test3) > 0);
}
END_TEST

START_TEST(strcmp_test3) {
  char test2[] = "0123456789";
  char test3[] = "\0";
  ck_assert_uint_eq(s21_strcmp(test2, test3) > 0, strcmp(test2, test3) > 0);
}
END_TEST

START_TEST(strcmp_test4) {
  char test1[] = "0123456789";
  char test4[] = "Lemon\0 juice";
  ck_assert_uint_eq(s21_strcmp(test4, test1) > 0, strcmp(test4, test1) > 0);
}
END_TEST

START_TEST(strcmp_test5) {
  char test4[] = "Lemon\0 juice";
  char test5[] = "Lemon\0 juice";
  ck_assert_uint_eq(s21_strcmp(test4, test5) == 0, strcmp(test4, test5) == 0);
}
END_TEST

START_TEST(strcmp_test6) {
  char test_8[] = "";
  char test_9[] = "";
  ck_assert_uint_eq(s21_strcmp(test_8, test_9) == 0,
                    strcmp(test_8, test_9) == 0);
}
END_TEST
START_TEST(strcmp_test7) {
  char test_10[] = "dfaghs8da111adf56756wa7ghedh";
  char test_11[] = "dfaghs8da111adf56756wa7ghedh";
  ck_assert_uint_eq(s21_strcmp(test_10, test_11) == 0,
                    strcmp(test_10, test_11) == 0);
}
END_TEST

Suite *suite_strcmp(void) {
  Suite *s = suite_create("strcmp_test");
  TCase *tc = tcase_create("strcmp_test_case");

  tcase_add_test(tc, strcmp_test1);
  tcase_add_test(tc, strcmp_test2);
  tcase_add_test(tc, strcmp_test3);
  tcase_add_test(tc, strcmp_test4);
  tcase_add_test(tc, strcmp_test5);
  tcase_add_test(tc, strcmp_test6);
  tcase_add_test(tc, strcmp_test7);

  suite_add_tcase(s, tc);
  return s;
}
