#include <stdio.h>
/**
 * main - print size of various types
 *
 *Description: prints the sizes of various types on the computer it is compiled

 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long long int));
	Printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
