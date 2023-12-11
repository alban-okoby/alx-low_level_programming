#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: A pointer to the first node where value is located,
 * or NULL if not found or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *current = list;
	listint_t *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (current != NULL && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->n, current->n);
		prev = current;

		for (size_t i = 0; i < jump && current->next != NULL; ++i)
			current = current->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev->n, current->n);
	current = prev;

	while (current != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->n, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
