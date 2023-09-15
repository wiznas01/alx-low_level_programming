#include "main.h"

/**
 * print_number - function to print integer number
 * @n: parameter n to be checked
 * Return: returns void
 */

void print_number(int n)
{
	int reverse = 0;
	int original = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		reverse = reverse * 10 + (n % 10);
		n /= 10;
	}
	if (original == 0)
		_putchar('0');
	else
	{
		while (reverse > 0)
		{
			_putchar(reverse % 10 + '0');
			reverse /= 10;
		}
	}
	_putchar('\n');
}
