#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *original_s = s; /* Save the original pointer */

	while (n > 0)
	{
		*s = b; /* Set the value of b at the current memory location */
		s++;   /* Move to the next memory location */
		n--;   /* Decrement the remaining count of bytes */
	}

	return original_s; /* Return the original pointer */
}

