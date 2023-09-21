#include "main.h"

/**
 * *string_toupper - function to change all lowercase to uppercase
 * @str: all strings to be converted
 * Return: returns modified string
 */

char *string_toupper(char *str)
{
	char *j = str;

	while (*j != '\0')
	{
		if (*j >= 'a' && *j <= 'z')
			*j = *j - 'a' + 'A';
		j++;
	}
	return (str);
}
