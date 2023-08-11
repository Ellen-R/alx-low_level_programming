#include <stdio.h>
/**
 * main - entry point
 * Return: this should return 0(success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int i;
	float j;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));
	return(0);
}
