#include "main.h"

/**
 * _strdup - function to create another space and store a duplicated string
 * @str: string to be duplicated
 * Return: returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		copy[i] = str[i];
	return (copy);
}
