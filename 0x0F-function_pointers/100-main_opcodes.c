#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byt;
	int i;
	char *array;

	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		fprintf(stderr, "Error\n");
		return (2);
	}

	array = (char *)main;

	for (i = 0; i < byt; i++)
	{
		printf("%02hhx", array[i]);
		if (i < byt - 1)
			printf(" ");
	}
    
	printf("\n");

	return (0);
}
