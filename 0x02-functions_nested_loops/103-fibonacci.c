#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued
 * Return: 0 on success
 */
int main(void)
{
	int i;
	unsigned long int j = 1;
	unsigned long int k = 2;
	unsigned long int nxt;
	unsigned long int sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum +=  j;
		}
		nxt = j + k;
		j = k;
		k = nxt;
	}

	printf("%lu\n", sum);

	return (0);
}
