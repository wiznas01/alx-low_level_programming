#include <stdio.h>
/**
 * main - program to find the fibonacci sequence of numbers between 0 and 50
 *
 * Return: returns the value 0
 */

int main(void)
{
	int x = 1;
	int y = 2;
	int next;
	int i;

	printf("%d, ", x);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%d", y);
		next = x + y;
		x = y;
		y = next;
	}
	printf("\n");
	return (0);
}
