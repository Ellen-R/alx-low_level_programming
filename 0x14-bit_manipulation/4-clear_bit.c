#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Clears the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long integer where the bit will be cleared.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
