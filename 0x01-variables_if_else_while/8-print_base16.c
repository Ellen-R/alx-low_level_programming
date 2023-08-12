#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 on success
 */

int main(void)
{
	char numbers;
	int letters;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar((numbers % 10) + '0');
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
