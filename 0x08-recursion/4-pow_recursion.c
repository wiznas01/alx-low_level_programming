#include "main.h"

/**
 * _pow_recursion - functionthat returns the value of x power y
 * @x: param x to be raised
 * @y: param y the power
 * Return: returns result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
