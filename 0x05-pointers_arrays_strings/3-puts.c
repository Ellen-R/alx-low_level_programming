#include "main.h"
/**
 * _puts - Write a function that prints a string to stdout
 * @str: checks string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

