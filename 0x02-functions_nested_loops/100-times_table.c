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

	if (n > 15 || n < 0)
		return;

	for (i = n ; i <= n ; i++)
	{
		m = n * i;
		if (i == 0)
			printf("%d,", m);
		else
		{
			printf("%3d,   ", m);
		}
	}
	printf("\n");
}
