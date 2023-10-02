#include "main.h"

/**
 * main - function main to print all argument it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
		printf("%s\n", argv[x]);
	return (0);
}
