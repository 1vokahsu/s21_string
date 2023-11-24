#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  char *buf = s21_NULL;
  char *current = (str == s21_NULL) ? buf : str;
  if (current == s21_NULL) return s21_NULL;
  while (*current != '\0') {
    const unsigned char *delim = delim;
    while (*delim != '\0') {
      if (*current == *delim) {
        *current = '\n';
        break;
      }
      delim++;
    }
    current++;
  }
  return str;
}