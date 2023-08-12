#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
