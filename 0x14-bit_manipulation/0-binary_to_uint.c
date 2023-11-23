#include "main.h"

/**
 * binary_to_uint - converts  binary to an unsigned int
 * @b:string represents the binary number
 * Return:unsigned int representation of the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (len = 0; *(b + len) != '\0'; len++)
	{
		if (!(b[len] == '0' || b[len] == '1'))
			return (0);
	}

	for (i = 0; *(b + i) != '\0'; i++)
		num += ((*(b + i) - '0') * (1 << (len - i - 1)));

	return (num);
}
