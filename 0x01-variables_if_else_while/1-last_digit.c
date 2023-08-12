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
	int last_digit;

        srand(time(NULL));

        n = rand() - RAND_MAX / 2;
	last_digit = n % 10 /* anytime you divide by 10, you will get last digit of your dividend*/

        if (last_digit > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
        }
        else if (last_digit == 0)
        {
                printf("Last digit of %d is %d and is 0\n", n, last_digit);
        }
        else if (last_digit <6 && last_digit != 0)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
        return (0);
}
