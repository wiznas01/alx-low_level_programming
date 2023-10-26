#include "main.h"

/**
 * flip_bits - returns the number of bits to flip from a number to another
 * @n: first number
 * @m: second number
 * Return: returns the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int counter = 0;

	while (xor_result)
	{
		counter = counter + (xor_result & 1);
		xor_result >>= 1;
	}
	return (counter);
}
