#include "main.h"

/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: int pointer to the allocated number
 */
int *array_range(int min, int max)
{
	int x, y;
	int *s;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	s = malloc(sizeof(int) * y);
	if (s == NULL)
		return (NULL);
	for (x = 0 ; x < y ; x++)
	{
		s[x] = min;
		min++;
	}
	return (s);
}
