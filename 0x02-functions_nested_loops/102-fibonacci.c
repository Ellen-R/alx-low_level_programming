#include <stdio.h>
/**
 * main - Prints first 50 Fibc no, start with 1 and 2
 * Return: 0 on success
 */
int main(void)
{
	int count;
	unsigned long fib_1 = 0;
	unsigned long fib_2 = 1;
	unsigned long sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib_1 + fib_2;
		printf("%lu", sum);

		fib_1 = fib_2;
		fib_2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
