#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print the contents of a list.
 * @h: pointer to list.
 *
 * Return: number of elements in a list
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}

