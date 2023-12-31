#include "s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  const s21_size_t *len_str1 = s21_str_lenght(str1);
  const s21_size_t *len_str2 = s21_str_lenght(str2);
  s21_size_t res = 0;

  for (s21_size_t i = 0; i < len_str1; i++) {
    for (s21_size_t j = 0; j < len_str2; j++) {
      if (str1[i] == str2[j]) {
        res = i;
        break;
      }
    }
  }
  if (res == 0) res = len_str1;
  return res;
}