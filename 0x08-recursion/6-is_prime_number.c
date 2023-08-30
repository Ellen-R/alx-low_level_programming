#include "main.h"

/**
 * check_prime - Helper function to check if a number is prime
 * @n: The number to check for primality
 * @divisor: The divisor to check divisibility
 *
 * This recursive helper function checks if a given number 'n' is prime
 * by checking its divisibility against the current 'divisor'. It recursively
 * divides the number by all potential divisors from 2 up to the square root
 * of the number.
 *
 * Return: 1 if 'n' is prime, 0 if it's not
 */
int check_prime(int n, int divisor)
{
	if (n <= 1)
	{
		return (0); /* Numbers less than or equal to 1 are not prime */
	}

	if (divisor * divisor > n)
	{
		return (1); /* No divisor found, 'n' is prime */
	}

	if (n % divisor == 0)
	{
		return (0); /* 'n' is divisible by 'divisor', not prime */
	}
	return (check_prime(n, divisor + 1)); /* Check the next divisor */
}

/**
 * is_prime_number - Checks if a given number is prime
 * @n: The number to check for primality
 *
 * This function determines whether a given number 'n' is prime by calling
 * the helper function 'check_prime' to perform the actual primality check.
 *
 * Return: 1 if 'n' is prime, 0 if it's not
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2)); /* Start divisibility check from 2 */
}

