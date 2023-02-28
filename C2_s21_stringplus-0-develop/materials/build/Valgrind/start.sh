#!/bin/bash

make s21_string.a
gcc -g s21_check.c s21_string.a -o unit_test -lcheck -lcheck -lpthread -lm -D_GNU_SOURCE -lrt -lsubunit
valgrind  ./unit_test
