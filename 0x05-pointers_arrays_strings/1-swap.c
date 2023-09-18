#include "main.h"

/**
 * swap_int - function to swap the value of two integers
 * @a: first interger
 * @b: second integer
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
