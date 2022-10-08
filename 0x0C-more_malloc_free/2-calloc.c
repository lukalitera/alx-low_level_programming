#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of a certain number
 * @nmemb: the number of elements
 * @size: the byte size of each array elememt
 *
 * Return: void pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		RETURN (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
