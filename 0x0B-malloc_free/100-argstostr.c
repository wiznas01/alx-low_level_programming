#include "main.h"
/**
 * argstostr - function to concatenate all  arguments
 * @ac: arument count
 * @av: argument vector
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int count = 0;
	char *args;

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			count++;
		count++;
	}
	args = malloc(sizeof(char) * count + 1);
	if (args == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			args[k] = av[i][j];
			k++;
		}
		args[k++] = '\0';
	}
	args[k] = '\0';
	return (args);
}
