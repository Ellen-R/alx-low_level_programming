#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @str: pointer
 * Return: string
 */
char *string_toupper(char *str)
{
	char *originalStr = str;/*Save the original string pointer*/

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A'); /* Convert to uppercas*/
		}
		str++;
	}
	return (originalStr); /* Return the pointer to the modified string*/
}
