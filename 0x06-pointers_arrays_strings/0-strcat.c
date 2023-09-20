#include "main.h"

/**
 * *_strcat - function to concatenate two string
 * @dest: destination
 * @src: source
 * Return: returns a char
 */

char *_strcat(char *dest, char *src)
{
	char *j = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return j;
}
