#include "main.h"

/**
 * _isdigit - function to check for digit
 * @c: parameter to be checked
 * Return: returns 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
