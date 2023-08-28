#include "main.h"

/**
 * _memcpy - Copies a memory area from src to dest.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest; /* Save the original destination pointer */

	while (n > 0)
	{
		*dest = *src; /* Copy the byte from source to destination */
		dest++;       /* Move to the next destination memory location */
		src++;        /* Move to the next source memory location */
		n--;          /* Decrement the remaining count of bytes */
	}

	return (original_dest); /* Return the original destination pointer */
}

