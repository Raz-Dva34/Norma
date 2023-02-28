//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(memmove_test1) {
  unsigned char src1[10] = "123456789";
  unsigned char dst_1[10] = "";
  unsigned char dst_1s[10] = "";
  ck_assert_str_eq(memmove(dst_1, src1, 5), s21_memmove(dst_1s, src1, 5));
}
END_TEST

START_TEST(memmove_test2) {
  unsigned char src1[10] = "123456789";
  unsigned char dst_2[15] = "";
  unsigned char dst_2s[15] = "";
  ck_assert_str_eq(memmove(dst_2, src1, 8), s21_memmove(dst_2s, src1, 8));
}
END_TEST

START_TEST(memmove_test3) {
  unsigned char src1[10] = "123456789";
  unsigned char dst_3[5] = "";
  unsigned char dst_3s[5] = "";
  ck_assert_str_eq(memmove(dst_3, src1, 4), s21_memmove(dst_3s, src1, 4));
}
END_TEST

START_TEST(memmove_test4) {
  char dest1[10] = "";
  char dest2[10] = "";
  char src[20] = "hello";
  ck_assert_str_eq(memmove(dest2, src, 9), s21_memmove(dest1, src, 9));
}
END_TEST

Suite *suite_memmove(void) {
  Suite *s = suite_create("memmove_test");
  TCase *tc = tcase_create("memmove_test_case");

  tcase_add_test(tc, memmove_test1);
  tcase_add_test(tc, memmove_test2);
  tcase_add_test(tc, memmove_test3);
  tcase_add_test(tc, memmove_test4);

  suite_add_tcase(s, tc);
  return s;
}