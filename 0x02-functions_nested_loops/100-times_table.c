#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: checks the parameter
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar((j * i) + '0');
				} else if ((j * i) < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((j * i) + '0');
				} else if ((j * i) >= 10 && (j * i) < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((j * i) / 10) + '0');
					_putchar(((j * i) % 10) + '0');
				} else if ((j * i) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((j * i) / 100) + '0');
					_putchar((((j * i) / 10) % 10) + '0');
					_putchar(((j * i) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
