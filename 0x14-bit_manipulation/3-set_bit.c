#include "main.h"

/**
 * set_bit - function that sets value of a bit to 1 at any given index
 * @n: pointer to the number whose bit you want to set
 * @index: index of the bit to set to 1, starting from 0
 * Return: 1 if it worked or - if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | (1UL << index));
	return (1);
}
