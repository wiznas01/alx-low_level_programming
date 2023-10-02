#include "main.h"

/**
 * _strchr - function tolocate character in a string
 * @s: parameter s
 * @c: parameter c
 *
 * Return: void
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
