//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(memcmp_test1) {
  char test1[] = "0123456789";
  char test2[] = "0123456789";
  ck_assert_uint_eq(s21_memcmp(test1, test2, 14) == 0,
                    memcmp(test1, test2, 14) == 0);
}
END_TEST

START_TEST(memcmp_test2) {
  char test1[] = "0123456789";
  char test3[] = "\0";
  ck_assert_uint_eq(s21_memcmp(test1, test3, 2) > 0,
                    memcmp(test1, test3, 2) > 0);
}
END_TEST

START_TEST(memcmp_test3) {
  char test2[] = "0123456789";
  char test3[] = "\0";
  ck_assert_uint_eq(s21_memcmp(test2, test3, 2) > 0,
                    memcmp(test2, test3, 2) > 0);
}
END_TEST

START_TEST(memcmp_test4) {
  char test1[] = "0123456789";
  char test4[] = "Lemon\0 juice";
  ck_assert_uint_eq(s21_memcmp(test4, test1, 9) > 0,
                    memcmp(test4, test1, 9) > 0);
}
END_TEST

START_TEST(memcmp_test5) {
  char test4[] = "Lemon\0 juice";
  char test5[] = "Lemon\0 juice";
  ck_assert_uint_eq(s21_memcmp(test4, test5, 7) == 0,
                    memcmp(test4, test5, 7) == 0);
}
END_TEST

START_TEST(memcmp_test6) {
  char test_8[] = "";
  char test_9[] = "";
  ck_assert_uint_eq(s21_memcmp(test_8, test_9, 1) == 0,
                    memcmp(test_8, test_9, 1) == 0);
}
END_TEST

START_TEST(memcmp_test7) {
  char test_10[] = "dfaghs8da111adf56756wa7ghedh";
  char test_11[] = "dfaghs8da111adf56756wa7ghedh";
  ck_assert_uint_eq(s21_memcmp(test_10, test_11, 1) == 0,
                    memcmp(test_10, test_11, 1) == 0);
}
END_TEST

Suite *suite_memcmp(void) {
  Suite *s = suite_create("memcmp_test");
  TCase *tc = tcase_create("memcmp_test_case");

  tcase_add_test(tc, memcmp_test1);
  tcase_add_test(tc, memcmp_test2);
  tcase_add_test(tc, memcmp_test3);
  tcase_add_test(tc, memcmp_test4);
  tcase_add_test(tc, memcmp_test5);
  tcase_add_test(tc, memcmp_test6);
  tcase_add_test(tc, memcmp_test7);

  suite_add_tcase(s, tc);
  return s;
}
