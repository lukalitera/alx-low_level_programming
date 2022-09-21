#include "main.h"
/**
 * print_last_digit - prints the last digits of any number
 * @a: the int value to be acted upon
 * Return: returns the last digit to calling function
 */
int print_last_digit(int a)
{
	int p;
	p = (a % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');

	return (p);
}
