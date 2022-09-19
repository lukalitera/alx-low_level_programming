#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of the integers using two input parameters
 *
 * @a: Input parameter 1
 * @b: Input parameter 2
 *
 * Return: Always 0.
 */
void swap_lst(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
