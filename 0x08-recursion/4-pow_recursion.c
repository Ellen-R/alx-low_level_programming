#include "main.h"


/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * @x: The base
 * @y: The exponent
 *
 * This function calculates the value of 'x' raised to the power of 'y'
 * using recursion.
 *
 * Return: The result of x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* Error case: Power of a negative exponent is not defined */
	if (y < 0)
	{
	return (-1);
	}
	/* Base case: Anything raised to the power of 0 is 1 */
	else if (y == 0)
	{
	return (1);
	}
	/* Recursive case: Calculate x raised to the power of (y - 1) */
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}

