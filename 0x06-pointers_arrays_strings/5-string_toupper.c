#include "main.h"

/**
 * *string_toupper - function to change all lowercase to uppercase
 * ' ': all strings
 * Retuns: returns string
 */

char *string_toupper(char *)
{
	char *j = str;

	while (*j != '\0')
	{
		if (*j >= 'a' && *j <= 'z')
			*j = *j - 'a' + 'A';
		j++;
	}
	return (' ');
}
