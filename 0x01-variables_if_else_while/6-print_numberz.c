#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 on success
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	putchar('\n');

	return (0);
}
