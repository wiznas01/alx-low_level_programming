#include "main.h"

/**
 * clear_bit - sets the value of bit to 0 at given index
 * @n: pointer to the number of bit to clear
 * @index: index of the bit to set to 0 starting from 0
 * Return: returns 1 is success, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & ~(1UL << index));
	return (1);
}
