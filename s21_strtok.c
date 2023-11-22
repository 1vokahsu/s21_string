#include "s21_string.h"
#include <stdio.h>

char *s21_strtok(char *str, const char *delim) {
    char *buf = NULL;
    char *current = (str == NULL) ? buf : str;
    if (current == NULL) return NULL;
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