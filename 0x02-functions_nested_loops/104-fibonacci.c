#include <stdio.h>

/**
 * main - function that prints the first 98 fibonacci numbers
 * Return: returns the value 0
 */

int main(void)
{
	int n = 98;
	int x = 1;
	int y = 2;
	int next;
	int count = 2;

	printf("%d, %d", x, y);
	while (count < n)
	{
		next = x + y;
		printf(", %d", next);
		x = y;
		y = next;
		count++;
	}
	printf("\n");
	return (0);
}
