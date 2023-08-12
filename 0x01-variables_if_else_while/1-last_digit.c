#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int lastDigt;

	srand(time(NULL));

	n = rand() - RAND_MAX / 2;
	lastDigt = n % 10;

	if (lastDigt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigt);
	}
	else if (lastDigt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigt);
	}
	else if (lastDigit < 6 && lastDigt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigt);
	}
	return (0);
}
