#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of program
 * Return: 0 on success
 */

int main(void)
{
	char Upper_Case = 'A';
	char Lower_Case = 'a';

	while (Lower_Case <= 'z')
	{
		putchar(Lower_Case);
		Lower_Case++;
	}
	while (Upper_Case <= 'Z')
	{
		putchar(Upper_Case);
		Upper_Case++;
	}
	putchar('\n');

	return (0);
}

