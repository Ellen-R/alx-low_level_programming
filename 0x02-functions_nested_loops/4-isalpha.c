#include "main.h"
/**
 * _isalpha - this checks for alphabetic character.
 * @c: the chacter to be checked
 * Return: return 1 if lower or upper case else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

