#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_Dest = dest;/*Save the original dest pointer*/

	/*Move the dest pointer to the end of the string*/
	while (*dest != '\0')
	{
		dest++;
	}
	/*Append at most n bytes from src to dest*/
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0'; /*Add a terminating null byte*/
	return (original_Dest);/* Return the pointer to the resulting string*/
}
