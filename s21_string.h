#ifndef S21_STRING_H
    typedef long unsigned s21_size_t;
    #define s21_NULL ((void *)0)
    s21_size_t s21_str_lenght(const char *str);
    // s21_size_t strcspn(const char *str1, const char *str2);
    char *s21_strtok(char *str, const char *delim);
    char *s21_strstr(const char *haystack, const char *needle);
    
    void *s21_memchr(const void *str, int c, s21_size_t n);
    int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
    void *s21_memset(void *str, int c, s21_size_t n);
    char *s21_strncat(char *dest, const char *src, s21_size_t n);
    char *s21_strchr(const char *str, int c);
    int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
    char *s21_strncpy(char *dest, const char *src, s21_size_t n);
#endif
