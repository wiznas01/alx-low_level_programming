#include "main.h"

/**
 * alloc_grid - function to create a 2d array
 * @width: width of array
 * @height: height of array
 * Return: returns pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **alloc;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);

		if (alloc[i] == NULL)
		{
			free(alloc);
			for (j = 0 ; j <= height ; j++)
				free(alloc[j]);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			alloc[i][j] = 0;
	}
	return (alloc);
}
