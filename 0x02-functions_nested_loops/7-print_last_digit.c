#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: checks for parameter n
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -n;
		i = n % 10;
	}
	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
