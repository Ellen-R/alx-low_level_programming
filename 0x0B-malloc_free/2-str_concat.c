#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0;
	char *concatenated;
	unsigned int i;

	/* Treat NULL strings as empty strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2*/
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string*/
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	/* Copy the contents of s1 and s2 to concatenated*/
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (i = 0; i < len2; i++)
		concatenated[len1 + i] = s2[i];

	/* Add the null terminator*/
	concatenated[len1 + len2] = '\0';

	return (concatenated);
}

