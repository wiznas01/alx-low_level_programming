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
	int i;

	printf("%d, %d", x, y);
	for (int i = 3 ; i <= n ; i++)
	{
		next = x + y;
		printf(", %d", next);
		x = y;
		y = next;
	}
	printf("\n");
	return (0);
}
