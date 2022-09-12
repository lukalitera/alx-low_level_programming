#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int d;

	for (d = 0; d <9; d++)
	{
		putchar((digit1 % 10) + '0');
		putchar((digit2 % 10) + '0');
		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
