#include <stdio.h>
#include <stdlib.h>

/**
 * random_char - generates random char
 * main - function main
 * Return: void
 */

char random_char()
{
	return 'a' + rand() % 26;
}
int main(void)
{
	printf("generated passwords:\n");

	for (int i = 0 ; i < 10 ; i++)
	{
		char password[11];
		for (int j = 0 ; j < 10 ; j++)
		{
			password[j] = random_char();
		}
		password[10] = '\0';
		printf("%s\n", password);
	}
	return (0);
}
