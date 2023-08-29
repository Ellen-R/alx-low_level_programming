#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;

		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				count++;
				break;
			}
			accept++;
		}

		if (found == 0)
			break;

		s++;
		accept = accept - count;
	}

	return (count);
}

