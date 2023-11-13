#include "main.h"
/**
 * _print_str - prints a string
 * @input: the string
 * Return: lenght of the string
 */
int _print_str(va_list input)
{
	char *str;
	int n;
	int length;

	str = va_arg(input, char*);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (n = 0; n < length; n++)
			_putchar(str[n]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (n = 0; n < length; n++)
			_putchar(str[n]);
		return (length);
	}
}
