#include <stdio.h>
/**
 * main - the function of main
 *
 * Return: returns the value 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
