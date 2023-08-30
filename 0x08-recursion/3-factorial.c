#include "main.h"


/**
 * factorial - Calculates the factorial of a given number
 * @n: The number for which factorial is to be calculated
 *
 * This function calculates the factorial of a given non-negative integer.
 * The factorial of a number 'n' is the product of all positive integers less
 * than or equal to 'n'.
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative
 */
int factorial(int n)
{
	/* Base case: Factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}
	/* Error case: Factorial of a negative number is not defined */
	else if (n < 0)
	{
		return (-1);
	}
	/* Recursive case: Calculate factorial using n * factorial(n - 1) */
	else
	{
		return (n * factorial(n - 1));
	}
}

