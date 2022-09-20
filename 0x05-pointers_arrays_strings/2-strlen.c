#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string pointer to an int that will be updated
 *
 * Return: returns length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
