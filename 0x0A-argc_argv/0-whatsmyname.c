#include "main.h"
#include <stdio.h>


/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: number of argumnts
 * @argv: array of argumnts
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

