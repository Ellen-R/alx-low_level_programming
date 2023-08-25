#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: input value
 * Return: n value
 */
char *leet(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((str[i] == 'a' || str[i] == 'A') && (j == 0))
			{
				str[i] = '4';
			}
			else if ((str[i] == 'e' || str[i] == 'E') && (j == 1))
			{
				str[i] = '3';
			}
			else if ((str[i] == 'o' || str[i] == 'O') && (j == 2))
			{
				str[i] = '0';
			}
			else if ((str[i] == 't' || str[i] == 'T') && (j == 3))
			{
				str[i] = '7';
			}
			else if ((str[i] == 'l' || str[i] == 'L') && (j == 4))
			{
				str[i] = '1';
			}
		}
	}
	return (str);
}
