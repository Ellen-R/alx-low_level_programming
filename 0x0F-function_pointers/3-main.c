#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 * Return: 0 on success, or exit with status 98, 99, or 100 on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	op_func = get_op_func(argv[2]);

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}

