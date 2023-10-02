#include "main.h"
/**
 * _isalpha - funtion to print a-z and A-Z
 * @c: parameter to be checked
 * Return: returns 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
