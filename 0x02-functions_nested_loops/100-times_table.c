#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function to print the times table
 * @n: parameter to be checked
 * Return: returns nothing if the conditions are met
 */

void print_times_table(int n)
{
	int i, m;

	for (i = 0 ; i <= 15 ; i++)
	{
		m = n * i;
		printf("%d, ", m);
		_putchar('\n');
	}
	if (n > 15 || n < 0)
		return;
}
