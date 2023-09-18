#include "main.h"

/**
 * _puts - function to print a string, then a new line
 * @str: string to br printed
 * Return: returns void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
