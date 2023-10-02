#include "main.h"

/**
 * _isupper - function to check for uppercase character
 * @c: parameter to be checked
 * Return: returns 1 if true and 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
