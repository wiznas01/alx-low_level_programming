#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: string to be reversed
 * Return: returns void
 */

void rev_string(char *s)
{
	int i;
	int len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		len++;
	for (i = 0 ; i < len / 2 ; i++)
	{
		int j;

		j = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = j;
	}
}
