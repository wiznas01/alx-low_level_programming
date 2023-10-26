#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to extract bit from
 * @index: index of the bit to retrieve, starting from 0
 * Return: returns the value of the bit at index or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	
	mask = 1UL << index;
	return (n & mask) ? 1 : 0;
}
