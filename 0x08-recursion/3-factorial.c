#include "main.h"

/**
 * factorial - function to print factorial
 * @n: paramater n
 * Return: returns the factorial of param n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
