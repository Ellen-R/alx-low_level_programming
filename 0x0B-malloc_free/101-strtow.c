#include <stdlib.h>
#include "main.h"

/**
 * count - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count(char *s)
{
	int in_word = 0, word_count =0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			in_word = 0;
		else if (in_word == 0)
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
	char **array, *temp;
	int i, j = 0, length = 0, words, k = 0, start, end;

	while (*(str + length))
		length++;
	words = count(str);
	if (words == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (k + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				array[j] = temp - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}

	array[j] = NULL;

	return (array);
}

