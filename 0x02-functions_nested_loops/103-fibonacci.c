#include <stdio.h>

/**
 * main - program to print fibonacci
 *
 * Return: returns the value 0
 */

int main(void)
{
	int limit = 4000000;
	int x = 1;
	int y = 2;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = x + y;
		if (next % 2 == 0)
			sum = sum + next;
		x = y;
		y = next;
	}
	printf("%d\n", sum);
	return (0);
}
