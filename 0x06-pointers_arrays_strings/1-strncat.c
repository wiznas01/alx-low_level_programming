#include "main.h"

/**
 * *_strncat - function to concat two strings
 * @dest: destination
 * @src: source
 * @n: parameter n
 * Return: returns string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *j = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (j);
}
