#include "main.h"

/**
 * _strspn - function to get length of prefix substring
 * @s: parameter s
 * @accept: input parameter
 *
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int m;

	while (*s)
	{
		for (m = 0 ; accept[m] ; m++)
		{
			if (*s == accept[m])
			{
				n++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (0);
}
