//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(memset_test1) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 1;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

START_TEST(memset_test2) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 2;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

START_TEST(memset_test3) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 3;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

START_TEST(memset_test4) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 4;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

START_TEST(memset_test5) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 5;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

START_TEST(memset_test6) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 6;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

START_TEST(memset_test7) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 7;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

START_TEST(memset_test8) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 8;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

START_TEST(memset_test9) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 9;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

START_TEST(memset_test0) {
  char text_one[30] = "1324";
  char text_two[30] = "1324";
  s21_memset(text_one, 0, 10);
  memset(text_two, 0, 10);
  int i = 0;
  ck_assert_int_eq(text_one[i], text_two[i]);
}
END_TEST

Suite *suite_memset(void) {
  Suite *s = suite_create("memset_test");
  TCase *tc = tcase_create("memset_test_case");

  tcase_add_test(tc, memset_test1);
  tcase_add_test(tc, memset_test2);
  tcase_add_test(tc, memset_test3);
  tcase_add_test(tc, memset_test4);
  tcase_add_test(tc, memset_test5);
  tcase_add_test(tc, memset_test6);
  tcase_add_test(tc, memset_test7);
  tcase_add_test(tc, memset_test8);
  tcase_add_test(tc, memset_test9);
  tcase_add_test(tc, memset_test0);

  suite_add_tcase(s, tc);
  return s;
}
