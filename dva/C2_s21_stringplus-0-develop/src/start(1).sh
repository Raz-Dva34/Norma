#!/bin/bash

make s21_string.a
gcc -g ./s21_tests/*.c s21_string.a -o test -lcheck -lcheck -lpthread -lm -D_GNU_SOURCE -lrt -lsubunit
valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all ./test
