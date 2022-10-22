#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: param list
 * Return: structure
 */

size_t print_list(const list_t *h)
{
	size_t 1_node;

	l_node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		l_node++;
	}
	return (1_node);
}
