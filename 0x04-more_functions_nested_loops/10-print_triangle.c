#include "main.h"

/**
 * print_triangle - ffunction to print triangle on the terminal using #
 * @size: parameter for size
 * Return: returns 0
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y <= size - x ; y++)
				_putchar(' ');
			for (y = 0 ; y <= x ; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
