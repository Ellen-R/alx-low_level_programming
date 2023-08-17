#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: 0 on success
 */
int main(void)
{
	long int buf;
	long int max;
	long int i;

	buf = 612852475143;
	max = -1;

	while (buf % 2 == 0)
	{
		max = 2;
		buf /= 2;
	}

	for (i = 3; i <= sqrt(buf); i = i + 2)
	{
		while (buf % i == 0)
		{
			max = i;
			buf = buf / i;
		}
	}

	if (buf > 2)
		max = buf;

	printf("%ld\n", max);

	return (0);
}

