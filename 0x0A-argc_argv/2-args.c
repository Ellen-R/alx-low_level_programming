#include "main.h"
#include <stdio.h>


/**
 * main - Write a program that prints all arguments it receives
 * @argc: number of argumnts
 * @argv: array of argumnts
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}

