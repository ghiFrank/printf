#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: the string
 * Return: returns lenght of the string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != 0; n++)
		;
	return (n);
}
