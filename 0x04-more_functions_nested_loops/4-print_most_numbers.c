#include "main.h"

/**
 * print_most_numbers - Write a function that prints 0-9 except 2, 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
	}
	_putchar('\n');
}

