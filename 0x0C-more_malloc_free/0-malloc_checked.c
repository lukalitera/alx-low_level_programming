#include "main.h"
#include <stlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b)

		if (mem == NULL)
			exit(98);

	return (mem);
}
