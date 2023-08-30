#include "main.h"


/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: Pointer to the string to be printed in reverse
 *
 * This function uses recursion to traverse the string until the null
 * terminator '\0' is encountered, effectively reversing the order of char.
 * Then, it starts printing the characters in reverse order, producing the
 * reversed string as output.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: If we reach the end of the string, stop recursion */
	if (*s == '\0')
	{
	return; /* Exit the recursion */
	}

	_print_rev_recursion(s + 1); /* Recursive call to move to the next char */
	_putchar(*s); /* Output the current character after the recursion */
}

