#include "main.h"
#include <stdbool.h> /* Include this for using 'bool' type*/

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	bool new_word = true; /* To indicate the start of a new word*/

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' ||
		    *str == ';' || *str == '.' || *str == '!' || *str == '?' ||
		    *str == '"' || *str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			new_word = true;
		}
		else if (new_word && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - ('a' - 'A'); /* Convert to uppercase*/
			new_word = false;
		}
		else
		{
			new_word = false;
		}
		str++;
	}
	return (str);
}
