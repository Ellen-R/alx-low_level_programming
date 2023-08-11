#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	n = srand(time(NULL));

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
