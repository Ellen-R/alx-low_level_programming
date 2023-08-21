#include "main.h"
/**
 * print_rev - Writes a function that prints a string, in reverse
 * @s: character string
 * return: nothing
 */
void print_rev(char *s)
{
	int length = 0;
	int rev;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (rev = length; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

