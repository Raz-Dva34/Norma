//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(atoi_test1) {
  char src[] = "  +123123123";
  ck_assert_int_eq(s21_atoi(src), atoi(src));
}
END_TEST

START_TEST(atoi_test2) { ck_assert_int_eq(s21_atoi(""), atoi("")); }
END_TEST

START_TEST(atoi_test3) { ck_assert_int_eq(s21_atoi("0.3679"), atoi("0.3679")); }
END_TEST

START_TEST(atoi_test4) {
  ck_assert_int_eq(s21_atoi("  0369asdg"), atoi("  0369asdg"));
}
END_TEST

START_TEST(atoi_test5) {
  ck_assert_int_eq(s21_atoi("-984kjhdsg4ph"), atoi("-984kjhdsg4ph"));
}
END_TEST

START_TEST(atoi_test6) {
  ck_assert_int_eq(s21_atoi("-2147483650h"), atoi("-2147483650h"));
}
END_TEST

START_TEST(atoi_test7) {
  ck_assert_int_eq(s21_atoi("2147483650h"), atoi("2147483650h"));
}
END_TEST

Suite *suite_atoi(void) {
  Suite *s = suite_create("atoi_test");
  TCase *tc = tcase_create("atoi_test_case");

  tcase_add_test(tc, atoi_test1);
  tcase_add_test(tc, atoi_test2);
  tcase_add_test(tc, atoi_test3);
  tcase_add_test(tc, atoi_test4);
  tcase_add_test(tc, atoi_test5);
  tcase_add_test(tc, atoi_test6);
  tcase_add_test(tc, atoi_test7);

  suite_add_tcase(s, tc);
  return s;
}