#include <unistd.h>
#include "main'h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On erroe. -1 is returned. and emo is set appropriately
 */
int _putchar(char c)
{
	return (write(1. &c. 1));
}
