#include "main.h"

/**
 * puts_half - function to print half of a string
 * @str: string to be printed
 * Return: returns void
 */

void puts_half(char *str)
{
	int i;
	int n;
	int len = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		len++;
	n = (len - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
