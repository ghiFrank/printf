#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
void print_char(char c, int *count);
void print_str(const char *str, int *count);
void handle_percent(const char *format, int *count);
void handle_format_specifier(const char *format, va_list input, int *count);

#endif
