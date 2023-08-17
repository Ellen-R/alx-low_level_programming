#include "main.h"

/**
 * print_numbers - Write a function that prints the numbers, from 0-9
 * return: void
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

