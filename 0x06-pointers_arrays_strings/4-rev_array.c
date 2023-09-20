#include "main.h"

/**
 * reverse_array - function to reverse the content of an array
 * @a: array
 * @n: number of elements in an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)

	{
		int count = a[start];

		a[start] = a[end];
		a[end] = count;

		start++;
		end--;
	}

}
