#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The string for which to calculate the length
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome
 * @s: The string to check for palindrome
 * @start: The starting index
 * @end: The ending index
 *
 * This recursive helper function checks if a given string 's' is a palindrome
 * by comparing characters at 'start' and 'end' indices and recursively
 * moving towards the center of the string.
 *
 * Return: 1 if 's' is a palindrome, 0 if it's not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* All characters checked, palindrome found */
	}
	if (s[start] != s[end])
	{
		return (0); /* Characters don't match, not a palindrome */
	}
	return (check_palindrome(s, start + 1, end - 1)); /* Check next characters */
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check for palindrome
 *
 * This function determines whether a given string 's' is a palindrome by
 * calling the helper function 'check_palindrome' to perform the actual
 * palindrome check.
 *
 * Return: 1 if 's' is a palindrome, 0 if it's not
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, 0, length - 1));
}

