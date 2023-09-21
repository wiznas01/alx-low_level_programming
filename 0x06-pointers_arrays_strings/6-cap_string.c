#include "main.h"

/**
 * *cap_string - function to capitalize all words on a string
 * @str: string to be modified
 * Return: returns modified string
 */

char *cap_string(char *str)
{
	int i;
	int j;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	for (j = 0 ; c[j] != '\0' ; j++)
	{
		if (c[j] == str[i] && (str[i + 1] <= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
