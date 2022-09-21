#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: parameter
 * Return: Always success
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
