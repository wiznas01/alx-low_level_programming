#include "main.h"

/**
 * _atoi - function to change string to an integer
 * @s: string to be converted
 * Return: returns result * sign
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	if (i == 0 || (i == 1 && (s[0] == '-' || s[0] == '+')))
	{
		return (0);
	}
	else
	{
		return (result * sign);
	}
}
