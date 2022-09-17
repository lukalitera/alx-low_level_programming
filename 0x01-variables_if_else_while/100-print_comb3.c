#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print single digit numbers starting from 0
 *
 * Return: return 0 at the end
 */

int main(void)
{

	int digit1; digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 1; digit2 <= 9; digit2++)

		{
			if (digit2 > digit1)

			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');

				if (i !=8)

				{
					putchar(',');
					putchar(' ')
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
