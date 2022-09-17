#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always Success
 */

int main(void)
{
	int i, j, k;
	
	for (i = 0; i <= 8; i++)

	{

		for (j = i +1; j <= 9; j++)
			
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar((num1 % 10) + '0');
				putchar((num1 % 10) + '0');
				putchar((num1 % 10) + '0');

				if (i == 7 && j == 8 && k == 9)

					continue;
				
				putchar(',');
				putchar(' ');

			}
		}

	}

	return (0);
}

