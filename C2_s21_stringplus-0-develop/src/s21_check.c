//
// Created by Killed Hizdahr on 28.02.2023.
//
#include "s21_tests/s21_test.h"


int main(void) {
  Suite *list_cases[] = {suite_memchr(),   suite_memcmp(),   suite_memcpy(),
                         suite_memmove(),  suite_memset(),   suite_strcat(),
                         suite_strncat(),  suite_strchr(),   suite_strcmp(),
                         suite_strncmp(),  suite_strcpy(),   suite_strncpy(),
                         suite_strcspn(),  suite_strerror(), suite_strlen(),
                         suite_strpbrk(),  suite_strrchr(),  suite_strspn(),
                         suite_strstr(),   suite_insert(),   suite_to_lower(),
                         suite_to_upper(), suite_trim(),     suite_strtok(),
                         suite_sprintf(),  suite_atoi(),     NULL};

  for (int i = 0; list_cases[i] != NULL; i++) {
    Suite *s = list_cases[i];
    SRunner *runner = srunner_create(s);
    srunner_run_all(runner, CK_NORMAL);
    srunner_free(runner);
  }
  return 0;
}
