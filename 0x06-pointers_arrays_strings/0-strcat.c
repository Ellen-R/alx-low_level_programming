#include "main.h"
/**
 * _strcat - Writes a function that concatenates two strings.
 * @dest: string character
 * @src: string character
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *original_Dest = dest; /*Save the original dest pointer*/

	/*Move the pointer to the end of the string*/
	while (*dest != '\0')
	{
		dest++;
	}
	/*Append the src string to dest*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/* Add a terminating null byte*/
	*dest = '\0';
	return (original_Dest);
}
