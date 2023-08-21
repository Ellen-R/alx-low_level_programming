#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src,
 *  includes the terminating (\0), to the buffer pointed to by dest
 * @dest: copies to
 * @src: copies from
 * Return: string on success
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

