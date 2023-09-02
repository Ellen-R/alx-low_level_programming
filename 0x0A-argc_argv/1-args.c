#include "main.h"
#include <stdio.h>


/**
 * count_arguments - Counts the number of command-line arguments.
 * @argc: The number of command-line arguments.
 *
 * Return: The number of arguments passed.
 */
int count_arguments(int argc)
{
	return (argc - 1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
	int num_arguments;

	num_arguments = count_arguments(argc);

	printf("%d\n", num_arguments);

	return (0);
}

