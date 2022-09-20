#include "main.h"
#include <stdio.h>

/**
 * print arry - prints n elements of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements of array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
