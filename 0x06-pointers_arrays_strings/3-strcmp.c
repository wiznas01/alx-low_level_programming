#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns void
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
	{
		return (-15);
	}
	else if (*s1 > *s2)
	{
		return (15);
	}
	return (0);
}
