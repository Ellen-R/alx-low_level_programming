#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: swaping integer character
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

