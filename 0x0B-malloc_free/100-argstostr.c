#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates an array of strings into a single string.
 * @ac: The number of strings in the array.
 * @av: The array of strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, str_index = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of all strings and newlines*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++; /* For the newline character*/
	}

	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return (NULL);

	/* Copy strings and add newlines*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[str_index] = av[i][j];
			str_index++;
		}
		result[str_index] = '\n';
		str_index++;
	}

	result[str_index] = '\0';

	return (result);
}

