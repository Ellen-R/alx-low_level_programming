#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * Return: 0 on success
 */


int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
	}
	putchar('\n');

	return (0);
}
