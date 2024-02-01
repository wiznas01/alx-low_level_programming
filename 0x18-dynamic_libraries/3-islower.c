#include "main.h"
/**
 * _islower - function to print alpahbet a-z
 *
 * @c: parameter to be checked
 * Return: returns the value 1 if its true and 0 if its false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
