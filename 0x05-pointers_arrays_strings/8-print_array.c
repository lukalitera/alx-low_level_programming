#include <stdio.h>
#include "main.h"

/**
 * print arry - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);

		if (j != (n - 1))
		{
			printf(", ");
		}

		printf("\n");
}
