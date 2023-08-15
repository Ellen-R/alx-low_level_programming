#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 times.
 * Return: void on success
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
