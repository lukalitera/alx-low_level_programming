#include <stdio.h>
#include "main.h"

/**
 * print arry - prints n digit of an array
 * @a: array
 * @n: number of values
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != n -1)
			printf(",");
	}

	printf("\n");
}
