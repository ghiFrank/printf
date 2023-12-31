#include "main.h"
/**
 * _printf - prints input
 * @format: identifiers
 * Return: returns length of printed string
 */
int _printf(const char *format, ...)
{
	format_t listo[] = {
		{"%s", _print_str}, {"%c", _print_char},
		{"%%", _print_perc}, {"%d", _print_dec},
		 {"%i", _print_int}};

	va_list input;
	int n = 0;
	int i;
	int length = 0;

	va_start(input, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[n] != '\0')
	{
		i = 4;
		while (i >= 0)
		{
			if (listo[i].spec[0] == format[n] && listo[i].spec[1] == format[n + 1])
			{
				length += listo[i].func(input);
				n = n + 2;
				goto Here;
			}
			i--;
		}
		_putchar(format[n]);
		length++;
		n++;
	}
	va_end(input);
	return (length);
}
