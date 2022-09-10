#include <stdio.h>
/**
 * main - entry point
 *
 * codes for printing all possible combintion of two d/t digits
 * in assending order nd separated by a comma folled by space
 * 
 * Return: 0 Success
 */
int main(void)
{
	int digit1, digit 2;

	for (digit1 = 0; digit1 <9; digit1++)
	{
		for (digit2 = digit1 + 1; digig2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
