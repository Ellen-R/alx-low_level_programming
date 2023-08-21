#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer
 * @s: string
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int i = 0, j = 0, n = 0, length = 0, m = 0, dig = 0;


	while (s[length] != '\0')
		length++;

	while (i < length && m == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (j % 2)
				dig = -dig;
			n = n * 10 + dig;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (n);
}

