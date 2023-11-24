
#include <stdio.h>
#include <string.h>

#include "s21_string.h"

int main(void) {
  // Массив со строкой для поиска
  char str[11] = "0123456789";
  // Код искомого символа
  int ch = '6';
  // Указатель на искомую переменную в строке,
  // по которой осуществляется поиск.
  char *ach;

  // Ищем символ ‘6’
  ach = s21_strchr(str, ch);

  // Выводим результат на консоль
  if (ach == NULL)
    printf("Символ в строке не найден\n");
  else
    printf("Искомый символ в строке на позиции # %s\n", ach);

  return 0;
}

s21_size_t s21_str_lenght(const char *str) {
  int i = 0;
  for (i = 0; str[i] != '\0'; i++)
    ;
  return i;
}