#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: A pointer to the first node where the value is located,
 * or NULL if not found or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list;
	skiplist_t *express = list;

	if (list == NULL)
		return (NULL);

	while (express != NULL && express->express != NULL && express->n < value)
	{
		current = express;
		express = express->express;

		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			current->index, express->index);

	while (current != NULL && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n == value)
			return (current);

		current = current->next;
	}
	return (NULL);
}
