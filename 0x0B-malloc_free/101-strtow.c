#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_space - check if a character is a whitespace character
 *
 * @c: The character to be checked
 *
 * Return: 1 if succes, 0 if not
 */

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
}

/**
 * count_words - count the number of words in a string
 * @str: the input string
 *
 * Return: the number of words in the string
 */

int count_words(const char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - split a string into words
 * @str: the input string
 *
 * Return: an array of strings with '\0' or NULL if string is empty
 */

char **strtow(char *str)
{
	int num_words, word_length, i = 0, j;
	char **words, *word_start = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (*str)
	{
		if (!is_space(*str))
		{
			word_length = 0;
			word_start = str;

			while (*str && !is_space(*str))
			{
				str++;
				word_length++;
			}
			words[i] = malloc((word_length + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				while (i > 0)
				{
					i--;
					free(words[i]);
				}
				free(words);
				return (NULL);	
			}
			for (j = 0; j < word_length; j++)
				words[i][j] = word_start[j];
			words[i][word_length] = '\0';
			i++;
		}
		else
			str++;
	}
	words[i] = NULL;
	return (words);
}

