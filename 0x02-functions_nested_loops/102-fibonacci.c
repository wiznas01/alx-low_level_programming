#include <stdio.h>
/**
 * main - program to find the fibonacci sequence of numbers between 0 and 50
 *
 * Return: returns the value 0
 */

int main(void)
{
	unsigned long int x = 1;
	unsigned long int y = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", x);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", y);
		next = x + y;
		x = y;
		y = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
