#include <stdio.h>
/**
 * main - the function main
 *
 * Return: returns the value 0
 */
int main(void)
{
	int n;
	char m;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
