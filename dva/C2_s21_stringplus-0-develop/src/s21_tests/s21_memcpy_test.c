//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(memcpy_test1) {
  unsigned char src[10] = "123456";
  unsigned char dst[10] = "";
  ck_assert_str_eq(memcpy(dst, src, 5), s21_memcpy(dst, src, 5));
}
END_TEST

START_TEST(memcpy_test2) {
  unsigned char src[] = "aboba";
  unsigned char dst[5] = "";
  ck_assert_str_eq(memcpy(dst, src, 5), s21_memcpy(dst, src, 5));
}
END_TEST

Suite *suite_memcpy(void) {
  Suite *s = suite_create("memcpy_test");
  TCase *tc = tcase_create("memcpy_test_case");

  tcase_add_test(tc, memcpy_test1);
  tcase_add_test(tc, memcpy_test2);

  suite_add_tcase(s, tc);
  return s;
}