#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;
	
	if (str == NULL)
		return (NULL);


	/* Calculate the length of the input string*/
	while (str[length] != '\0')
	{
		length++;
	}

	/* Allocate memory for the duplicated string*/
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the original string to the duplicated string*/
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}

