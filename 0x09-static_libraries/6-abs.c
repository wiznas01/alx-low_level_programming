#include "main.h"
/**
 * _abs - function to find the absolute value
 * @x: parameter to be checked
 * Return: returns an absolute number
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else if (x >= 1)
		return (x);
	return (0);
}
