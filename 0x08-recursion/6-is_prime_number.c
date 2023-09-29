#include "main.h"

int real_prime(int n, int i);

/**
 * is_prime_number - function to determine if an int is prime num or not
 * @n: parameter n
 * Return: 1 if n is prime num and 0 if it is not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - function to calculate if a num is prime or not recursively
 * @n: param n
 * @i: iterator
 * Return: return 1 if n is prime and 0 if it is not
 */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
