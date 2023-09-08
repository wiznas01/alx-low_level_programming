#include <stdio.h>
/**
 * main - the function of main
 *
 * Return: returns the value 0
 */

int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
