#include "main.h"

/**
 * *_strncpy - function to copy a string
 * @dest: destination
 * @src: source
 * @n: parameter n
 * Return: returns copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *original = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original);
}
