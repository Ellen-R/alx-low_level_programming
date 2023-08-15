#include "main.h"
/**
 * _islower - this function will check for lower cases
 * Return: 0 if no lowercase and 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
