#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: Pointer to the string to be printed
 *
 * This function recursively prints each character of the string until it
 * encounters the null terminator '\0', at which point it prints a newline
 * character to create a new line.
 */
void _puts_recursion(char *s)
{
	/* Base case: If we reach the end of the string, print a newline */
	if (*s == '\0')
	{
	_putchar('\n'); /* Output a newline character */
	return; /* Exit the recursion */
	}

	_putchar(*s); /* Output the current character */
	_puts_recursion(s + 1); /* Recursive call to print the next character */
}

