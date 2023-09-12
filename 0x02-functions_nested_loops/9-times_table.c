#include "main.h"
#include <stdio.h>
/**
 * times_table - function to print the multiplication table of 9
 * Return: returns the value 0
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			z = x * y;
			if (z == 0)
				printf("%d, ", z);
			else
			{
				printf("%2d, ", z);
				if (z != 9)
					printf(", ");

			}
		}
		printf("\n");

	}
}
