#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - function to add 2 integers
 * @a: int 1
 * @b: int 2
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to substract 2 integers
 * @a: int 1
 * @b: int 2
 * Return: result of substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply 2 integers
 * @a: int 1
 * @b: int 2
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide 2 integers
 * @a: int 1
 * @b: int 2
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function to perform modulo
 * @a: int 1
 * @b: int 2
 * Return: result of modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
