#include "main.h"

/**
 * rev_string - Writes a function that reverses a string
 * @s: string character
 * Return: Stringon success
 */

void rev_string(char *s)
{
	char rev;
	int count;
	int i;

	rev = s[0];
	count = 0;

	while (s[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}

