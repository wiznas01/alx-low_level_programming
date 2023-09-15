#include <stdio.h>

/**
 * main - function of main
 * Return: returns the value
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 100 ; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (x % 3 == 0)
			printf("%s", "Fizz");
		else if (x % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", x);
		if (x != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
