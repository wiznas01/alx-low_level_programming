#include "main.h"

/**
 * print_diagonal - function to print \ on the terminal
 * @n: parameter to be checked
 * Return: returns the value 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 0 ; x < n ; x++)
		{
			for (y = 1 ; y <= x; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
