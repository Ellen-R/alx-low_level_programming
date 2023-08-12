#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 on success
 */

int main(void)
{
	char letters;

	for (letters = 'z' letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
