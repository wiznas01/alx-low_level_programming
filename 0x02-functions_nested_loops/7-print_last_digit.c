#include "main.h"
/**
 * print_last_digit - function to print the last number
 * @x: parameter to be checked
 * Return: returns the last digit of x
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
