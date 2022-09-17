#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: returns a straight line
 */

void print_lines(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		forb(co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
