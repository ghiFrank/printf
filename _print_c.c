#include "main.h"
/**
 * _print_char - prints a character
 * @input: character to be printed
 * Return: returns 1
 */
int _print_char(va_list input)
{
	char c;

	c = va_arg(input, int);
	_putchar(c);
	return (1);
}
