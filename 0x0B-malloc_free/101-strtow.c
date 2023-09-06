#include <stdlib.h>
#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string.
 * @s: The string to evaluate.
 *
 * Return: The number of words.
 */
int count_words(char *s)
{
	int i, in_word = 0, word_count = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **array_word, *temp_word;
	int i, j = 0, length = 0, words, k = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	array_word = (char **) malloc(sizeof(char *) * (words + 1));
	if (array_word == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				temp_word = (char *) malloc(sizeof(char) * (k + 1));
				if (temp_word == NULL)
					return (NULL);
				while (start < end)
					*temp_word++ = str[start++];
				*temp_word = '\0';
				array_word[k] = temp_word - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}

	array_word[j] = NULL;

	return (array_word);
}

