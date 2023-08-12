#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of program
 * Return: 0 on success
 */

int main(void)
{
	char letters;

	letters = 'a';
	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
