#include "main.h"

/**
 * create_array - function to create an array
 * @size: size of the array
 * @c: character to be assigned
 * Return: returns pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		arr[i] = c;
	return (arr);
}
