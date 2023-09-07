#include <stdio.h>

/**
 * main - the function of main
 *
 * Return: returns the value 0
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(S)", sizeof(int));
	printf("Size of a long int: %lu byte(S)", sizeof(long int));
	printf("Size of a long long int: %lu byte(S)", sizeof(long long int));
	printf("Size of a float: %lu byte(S)", sizeof(float));
	return (0);
}
