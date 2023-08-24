#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *originalDest = dest; /* Save the original dest pointer*/

    /* Copy at most n characters from src to dest*/
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	/* If n is not fully consumed, pad the remaining characters with null bytes*/
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (originalDest);/*Return the pointer to the resulting string*/
}
