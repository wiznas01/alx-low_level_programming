#include "main.h"

/**
 * _strpbrk - function to search a string for set of bytes
 * @s: parameter s
 * @accept: input
 *
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0 ; accept[a] ; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
