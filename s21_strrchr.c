#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  unsigned char *res = s21_NULL;
  int s1;
  if (c >= 0 && c < 256) {
    while ((s1 = *str++) != 0) {
      if (s1 == c) {
        res = (unsigned char *)str - 1;
      }
    }
  }
  return res;
}