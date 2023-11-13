#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format - converter
 * @spec: pointer of specifier
 * @func: specifier function
 */
typedef struct format
{
	char *spec;
	int (*func)();
} format_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list input);
int _strlen(char *s);
int _print_str(va_list input);
int _print_perc(void);
#endif
