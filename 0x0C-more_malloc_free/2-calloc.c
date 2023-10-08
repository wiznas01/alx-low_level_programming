#include "main.h"
/**
 * _calloc - allocates memeory for an array using calloc
 * @nmemb: number of array numbers
 * @size: size of an array
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
