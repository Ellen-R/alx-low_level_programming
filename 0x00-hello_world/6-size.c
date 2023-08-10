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

	printf("Size of char is: %lu byte(s)\n"(unsigned long)sizeof(x));
	printf("Size of int is: %lu byte(s)\n"(unsigned long)sizeof(y));
	printf("Size of long int is: %lu byte(s)\n"(unsigned long)sizeof(z));
	printf("Size of long long int is: %lu byte(s)\n"(unsigned long)sizeof(i));
	printf("Size of float is: %lu byte(s)\n"(unsigned long)sizeof(j));
}
