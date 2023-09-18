#include "main.h"

/**
 * print_array - function to print array
 * @a: array to be printed
 * @n: number of elements in the array to be printed
 * Return: returns void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
