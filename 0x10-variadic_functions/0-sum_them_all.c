#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its papameters
 * @n: the number of parameters
 *
 * Return: returns the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int num;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum = sum + num;
	}

	va_end(args);
	return (sum);
}
