#include "main.h"

/**
 * wildcmp - Compares two strings and checks if they match, considering *
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * This function compares two strings 's1' and 's2', where 's2' can contain
 * the special character '*', which matches any substring (including an empty
 * string). The function uses recursion to compare the strings, taking into
 * account the '*' character's behavior.
 *
 * Return: 1 if the strings are identical, 0 if they are not
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	/* If one of the strings is empty, they can't be identical */
	if (*s1 == '\0' || *s2 == '\0')
	{
		/* Check if the remaining part of s2 consists only of '*' */
		if (*s2 == '*' && *(s2 + 1) == '\0')
		{
			return (1);
		}
	return (0);
	}

	/* If the current characters match or s2 has a '*', check next characters */
	if (*s1 == *s2 || *s2 == '*')
	{
		/* Recursive case: Move in both strings, considering '*' as a match */
	return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1 + 1, s2)
			|| wildcmp(s1, s2 + 1));
	}

	return (0); /* Current characters don't match, and '*' isn't applicable */
}

