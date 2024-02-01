#include "main.h"

/**
 * _memcpy - a function to copy memory area
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: returns memory with bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i ; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
