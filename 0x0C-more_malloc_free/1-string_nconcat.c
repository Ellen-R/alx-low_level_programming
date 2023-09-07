#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes from the 2nd string
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: A ptr to the newly alocated concatenated string,or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
	s1 = " ";
	if (s2 == NULL)
	s2 = " ";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	result = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
