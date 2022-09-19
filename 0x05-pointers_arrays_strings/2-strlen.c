#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string pointer to an int that will be updated
 *
 * Return: returns length of a string
 */

int _strlen(char *s)
{
	int len;

	while(*s != '\0')
	{
		len + = 1;
		*s = *s + 1;
	}
	return (len);
}
