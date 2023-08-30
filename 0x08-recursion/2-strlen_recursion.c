#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string using recursion
 * @s: Pointer to the string for which length is to be calculated
 *
 * This function uses recursion to count the number of characters in the string
 * until the null terminator '\0' is encountered. The count represents length
 * of the string.
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: If we reach the end of the string, length is 0 */
	if (*s == '\0')
	{
	return (0);
	}

	/* Recursive case: Increment length by 1 and move to the next character */
	return (1 + _strlen_recursion(s + 1));
}

