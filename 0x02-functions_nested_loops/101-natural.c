#include <stdio.h>
/**
 * main - the function main sum multiples of 3 and 5 below 1024
 * Return: returns the value 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
