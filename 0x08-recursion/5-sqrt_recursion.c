#include "main.h"

/**
 * find_sqrt - Helper function to find the square root using binary search
 * @n: The number for which to find the square root
 * @start: The starting point for binary search
 * @end: The ending point for binary search
 *
 * This recursive helper function uses binary search to find the square root
 * of a given number 'n' in the range between 'start' and 'end'.
 *
 * Return: The square root of 'n' if found, otherwise -1
 */
int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2; /* Calculate the midpoint */
	int mid_squared = mid * mid; /* Calculate the square of the midpoint */

	/* If start becomes greater than end, square root not found */
	if (start > end)
	{
		return (-1);
	}

	if (mid_squared == n)
	{
		return (mid); /* Midpoint is the square root */
	}
	else if (mid_squared > n)
	{
		/* Search the left half of the range */
		return (find_sqrt(n, start, mid - 1));
	}
	else
	{
		/* Search the right half of the range */
		return (find_sqrt(n, mid + 1, end));
	}
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number for which to calculate the square root
 *
 * This function calculates the natural square root of a given number 'n'
 * using a helper function that implements binary search.
 *
 * Return: The square root of 'n' if it exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Negative numbers don't have a natural sqrt*/
	}
	return (find_sqrt(n, 0, n)); /* Start the binary search from 0 to n */
}

