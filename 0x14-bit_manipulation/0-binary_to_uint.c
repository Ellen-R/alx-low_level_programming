#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there are invalid characters
 *         in the string or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		char currentChar = b[i];

		if (currentChar == '0' || currentChar == '1')
		{
			result = (result << 1) | (currentChar - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
