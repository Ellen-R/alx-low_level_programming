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
	int in_word = 0, word_count = 0;

	for (int i = 0; s[i]; i++)
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
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (Success) or NULL (Error).
 */
char **strtow(char *str)
{	char **word_array, *word;
	int len = 0, word_count = 0, char_count = 0, in_word = 0;

	while (str[len])
		len++;
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);
	word_array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (word_array == NULL)
		return (NULL);
	for (int i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (in_word)
			{	word = (char *)malloc(sizeof(char) * (char_count + 1));
				if (word == NULL)
				{
					while (--word_count >= 0)
						free(word_array[word_count]);
					free(word_array);
					return (NULL);
				}
				for (int j = 0; j < char_count; j++)
					word[j] = str[i - char_count + j];
				word[char_count] = '\0';
				word_array[word_count++] = word;
				in_word = 0;
				char_count = 0;
			}
		}
		else if (!in_word)
			in_word = 1;
			char_count = 1;
		else
			char_count++;
	}
	word_array[word_count] = NULL;
	return (word_array);
}

