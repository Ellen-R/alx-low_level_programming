#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_all_digits - Check if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_all_digits(char *str)
{
	unsigned int index = 0;

	while (index < strlen(str))
	{
		if (!isdigit(str[index]))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int count = 1;
	int str_to_int;
	int result = 0;

	while (count < argc)
	{
		if (is_all_digits(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			result += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", result);
	return (0);
}

