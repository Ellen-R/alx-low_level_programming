#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @str: The string to compute the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (!_isdigit(str[len]))
			return (-1); /* Not a digit found, invalid input*/
		len++;
	}

	return (len);
}

/**
 * multiply - Multiplies two positive numbers as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The result of multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int i, j, product;
	int carry = 0;
	char *result = malloc(sizeof(char) * (len_result + 1));
	char *new_result;

	if (!result)
		exit(98);

	for (i = 0; i < len_result; i++)
		result[i] = '0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0')
				+ (result[i + j + 1] - '0') + carry;
			carry = product / 10;
			result[i + j + 1] = (product % 10) + '0';
		}
		result[i] += carry;
	}

	if (result[0] == '0')
	{
		new_result = result + 1;
		free(result);
		return (new_result);
	}
	return (result);
}

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}


	if (len1 == -1 || len2 == -1)
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);

	return (0);
}
