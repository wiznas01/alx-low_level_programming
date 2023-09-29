#include "main.h"

int check_palli(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function to check if a string is a pallidrome
 * @s: string to reverse
 * Return: returns 1 if it is and 0 if it is not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palli(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of string
 * @s: string to calculate
 * Return: returns length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palli - checks if characters are pallidrome recursively
 * @s: string to be checked
 * @i: iterator
 * @len: length of string
 * Return: returns 1 if it is pallidrome and 0 if it is not
 */
int check_palli(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palli(s, i + 1, len - 1));
}
