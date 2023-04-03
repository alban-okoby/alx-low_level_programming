#include <stdio.h>
#include "lists.h"

/**
 * listint_len - this function print all the
 * elements of a listint_t list
 * @h : param pointer
 * return: -> the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_number = 0;

	for (; h != NULL; h = h->next)
	{
		nodes_number++;
	}
	return (nodes_number);
}
