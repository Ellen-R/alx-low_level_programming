#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: pointer to string params
 *
 * Return: string
 */
char *rot13(char *str)
{
	int i;
	int j;
	char base;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 2; j++)
		{
			base = 'a'; /* Base character to adjust lowercase and uppercase letters*/

			if (j == 1)
			{
				base = 'A';
			}
			if (str[i] >= base && str[i] < base + 13)
			{
				str[i] = str[i] + 13;
			}
			else if (str[i] >= base + 13 && str[i] <= base + 25)
			{
				str[i] = str[i] - 13;
			}
		}
	}
	return (str);
}
