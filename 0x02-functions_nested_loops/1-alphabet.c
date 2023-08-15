#include "main.h"
/**
 * print_alphabet - It prints alphabets
 * Return: void  on success
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
