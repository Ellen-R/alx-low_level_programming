#include "main.h"

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int find_sqrt(int n, int i)
{
	int mid_square = i * i;

	if (mid_square > n)
		return (-1);
	if (mid_square == n)
		return (i);
	return (find_sqrt(n, i + 1));
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
	return (find_sqrt(n, 0)); /* Start the binary search from 0 to n */
}

