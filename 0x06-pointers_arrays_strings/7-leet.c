#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i;
	int j;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == arr1[j])
			{
				n[i] = arr2[j];
			}
		}
	}
	return (n);
}

