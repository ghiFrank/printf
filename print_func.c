#include "main.h"
#include <stdio.h>
#include <stdrag.h>
#include <unistd.h>

/**
 * _print_char -  function that prints a character
 * @c: the character to be printed
 * @count: counter of the characters
 */

void print_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

/**
 * print_str - function that prints a string
 * @str: the string to be printed
 * @count: counter of the string
 */

void print_str(const char *str, int *count)
{
	int _strlen = 0;

	while (str[_strlen] !=  '\0')
	{
		_strlen++;
		(*count)++;
	}
	write(1, str, _strlen);
}

/**
 * handle_percent -  function that  handles the '%' character
 * @fornat: format string
 * @count: counter of the printed character
 */

void handle_percent(const char *format, int *count)
	print_char('%', count);
	if (*format != '%')
	print_char(*format, count);
}

/**
 * handle_format_specifier - function that handles fromat specifiers
 * @format: format string
 * @input: user's input
 * @count: counter of printed characters
 */

void handle_format_specifier(const char *format, va_list input, int *count)
{

	if (*format == 'c')
	{
		c = va_arg(input, int);
		print_char(c, count);
	}
	else if (*fornat == 's')
	{
		str = va_arg(input, char*);
		print_str(str, count);
	}
	else if (*format == '%')
	{
		handle_perfecnt(format, count);
	}
	else
	{
		handle_percent(format, count);
	}
/**
 * _printf - prints input
 * @format: input
 * Return: returns -1 if format is NULL,
 * else return number of characters printed
 */
int _printf(const char *format, ...)
{
	if (format ==  NULL)
		return (-1);

	va_list input;
	int n = 0;

	va_start(input, format);

	while (*format != '\0')
	{
		if (*format != '%')
			print_char(*format, &n);
		else
		{
			format++;
			handle_format_specifier(format, input, &n);
		}
		format++;
	}

	va_end(input);
	return (n);
}
