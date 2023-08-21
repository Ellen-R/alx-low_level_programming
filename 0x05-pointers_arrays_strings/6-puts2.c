#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first one
 * @str: string input
 * Return: nothing
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *j = str;
	int n;

	while (*j != '\0')
	{
		j++;
		length++;
	}
	i = length - 1;
	for (n = 0 ; n <= i ; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}

