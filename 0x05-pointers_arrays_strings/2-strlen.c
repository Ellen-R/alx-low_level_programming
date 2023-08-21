#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: string
 * Return: length on success
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

