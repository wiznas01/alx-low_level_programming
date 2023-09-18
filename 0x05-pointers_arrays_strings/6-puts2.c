#include "main.h"

/**
 * puts2 - function to print every other character of a string
 * @str: string to be printed
 * Return: returns void
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
