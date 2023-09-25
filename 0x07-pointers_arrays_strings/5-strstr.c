#include "main.h"

/**
 * _strstr - function to locate substring
 * @haystack: input
 * @needle: input
 *
 * Return: void
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		char *h = haystack;
        	char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
			return (haystack);
		haystack++;
	}
	return (0);
}
