#include <stdio.h>
/**
 * main - the function of main
 *
 * Return: returns the value 0
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
