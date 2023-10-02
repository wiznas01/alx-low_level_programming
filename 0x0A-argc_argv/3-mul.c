#include "main.h"
/**
 * _atoi - function that converts string to integer
 * @s: string to be converted
 * Return: returns the converted integer
 */
int _atoi(char *s)
{
	int a, b, c, d, len, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
/**
 * main - function main to print result of multiplication
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 if succesful and 1 if error
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
