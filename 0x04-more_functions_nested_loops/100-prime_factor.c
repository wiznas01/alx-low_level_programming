#include <stdio.h>

/**
 * main - function to print the largest prime factor
 * Return: returns void
 */

int main(void)
{
	long int num = 612852475143;
	long int primeFactor = -1;
	
	int i = 3;

	while (num % 2 == 0)
	{
		primeFactor = 2;
		num /= 2;
	}
	while (i * i <= num)
	{
		while (num % i == 0)
		{
			primeFactor = i;
			num /= i;
		}
		i += 2;
	}
	if (num > 2)
		primeFactor = num;
	printf("%ld\n", primeFactor);
	return (0);
}
