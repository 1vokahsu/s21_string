#include "s21_string.h"
s21_size_t s21_str_lenght(const char *str) {
  s21_size_t i = 0;
  for (i = 0; str[i] != '\0'; i++)
    ;
  return i;
}