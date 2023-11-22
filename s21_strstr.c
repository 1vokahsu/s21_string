#include "s21_string.h"
#include <stdio.h>

char *s21_strstr(const char *haystack, const char *needle) {
    char *res = NULL;
    if (*needle == '\0') {
        res = (const unsigned char *)haystack;
    } else {
        while (*haystack != '\0') {
            const unsigned char *h = haystack;
            const unsigned char *n = needle;

            while (*n != '\0' && *h == *n) {
                h++;
                n++;
            }
            if (*n == '\0') {
                return (const unsigned char *)haystack;
            }
            haystack++;
        }
    }
    return res;

}