#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end;
	int temp;

	end = n - 1;

	while (start < end)
	{
		/*Swap elements at start and end indices*/
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		/*Move indices towards each other*/
		start++;
		end--;
	}
}
