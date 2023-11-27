#include <errno.h>
#include <stdio.h>
#include <string.h>

#include "s21_string.h"

int main(void) {
  printf("%s", s21_strerror(ENOENT));
  printf("%s", strerror(ENOENT));

  return 0;
}
