#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - prints input
 * @format: character string
 * Return: returns -1 if format is NULL,
 * else returns number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list input;
	int n = 0; /* counter of number of characcters printed */

	if (format == NULL) /* checks if format is NULL */
		return (-1);
	va_start(input, format);
	while (*format != '\0') /** loop that iterates through the characters of
				* the string and checks if it isn't '\0'
				*/
	{
		if (*format != '%') /* checks if format isn't '%' */
		{
			write(1, format, 1); /* wrties the character to the standard output */
			n++;
		}
		else /* if format is '%' */
		{
			format++; /* moves to the character after '%' */
			if (*format == 'c') /* checks if character is 'c' */
			{
				char c = va_arg(input, int); /* the argument for char */

				write(1, &c, 1);
				n++;
			}
			else if (*format == 's') /* checks if the character is 's' */
			{
				char *str = va_arg(input, char*); /* the argument for string */
				int _strlen = 0;

				while (str[_strlen] != '\0') /** iterates
							      * through the characters of the string
								* and checks if it isn't '\0'
								 */
				{
					_strlen++;
					n++;
				}
				write(1, str, _strlen);
			}
			else if (*format == '%') /* checks if the character is '%' */
			{
				write(1, format, 1);
				n++;
			}
			else /* handle unsupported format specifier here */
			{
				char p = '%';

				write(1, &p, 1);
				write(1, format, 1);
				n += 2;
			}
		}
		format++;
	}
	va_end(input);
	return (n);
}
