#include "main.h"
/**
 * print_sign - function to print the sign
 * @n: parameter to be checked
 * Return: returns 1 when greater than, 0 when equals and -1 when less than
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
