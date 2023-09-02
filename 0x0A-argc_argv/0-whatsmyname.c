#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_program_name - Prints the name of the program.
 * @argv0: The program's name from argv[0].
 */
void print_program_name(char *argv0)
{
	printf("%s\n", argv0);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		print_program_name(argv[0]);
        	return (EXIT_SUCCESS);
	}
	else
	{
		fprintf(stderr, "Error: No program name available.\n");
        	return (EXIT_FAILURE);
	}
}

