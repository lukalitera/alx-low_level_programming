#include <stdio.h>
#include <stdlid.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{

	int i, j;

	for (i = 0; i < 98; i++)
	{
		for (j = p + 1; i <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			
			if (i == 98 && j == 99)
				continue;
			putchar(',');
			putchar(' ')
		}
	}
	putchar('\n');
	return (0);
}