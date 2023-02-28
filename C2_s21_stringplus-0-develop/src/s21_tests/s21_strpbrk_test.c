//
// Created by Killed Hizdahr on 27.02.2023.
//
#include "s21_test.h"

START_TEST(strpbrk_test1) {
  char text_one[30] = "13t24";
  char text_two[30] = "t";
  ck_assert_str_eq(strpbrk(text_one, text_two),
                   s21_strpbrk(text_one, text_two));
}
END_TEST

START_TEST(strpbrk_test2) {
  ck_assert_str_eq(strpbrk("text_one", "_"), s21_strpbrk("text_one", "_"));
}
END_TEST

START_TEST(strpbrk_test3) {
  ck_assert_str_eq(strpbrk("Issemessez", "e"), s21_strpbrk("Issemessez", "e"));
}
END_TEST

START_TEST(strpbrk_test4) {
  ck_assert_ptr_eq(strpbrk("", "r"), s21_strpbrk("", "r"));
}
END_TEST

START_TEST(strpbrk_test5) {
  ck_assert_ptr_eq(strpbrk("text_one", ""), s21_strpbrk("text_one", ""));
}
END_TEST

Suite *suite_strpbrk(void) {
  Suite *s = suite_create("strpbrk_test");
  TCase *tc = tcase_create("strpbrk_test_case");

  tcase_add_test(tc, strpbrk_test1);
  tcase_add_test(tc, strpbrk_test2);
  tcase_add_test(tc, strpbrk_test3);
  tcase_add_test(tc, strpbrk_test4);
  tcase_add_test(tc, strpbrk_test5);

  suite_add_tcase(s, tc);
  return s;
}
