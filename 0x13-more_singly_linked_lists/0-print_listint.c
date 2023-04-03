#include <stdio.h>
#include "lists.h"

/**
 * size_t print_listint - this function print all the
 * elements of a listint_t list
 *
 * @h : param pointer
 *
 * return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_number = 0;

	for (; h; h = h->next)
	{
		nodes_number++;
		printf("%d\n", h->n);
	}
	return (nodes_number);
}
