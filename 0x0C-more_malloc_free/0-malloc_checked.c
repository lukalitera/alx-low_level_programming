#include "main.h"
#include <stlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @c: memory to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(c);
	if (a == NULL)
		exit(98);
	return(a);
}
