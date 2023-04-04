#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - the function entry point
 * @head: param -> pointer
 * Return: number listint_t list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *var1, *var2;
	size_t node_number = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	var1 = head->next;
	var2 = (head->next)->next;

	while (var2)
	{
		if (var1 == var2)
		{
			var1 = head;
			for (; var1 != var2; node_number++)
			{
				var1 = var1->next;
				var2 = var2->next;
			}

			var1 = var1->next;
			for (; var1 != var2; node_number++)
				var1 = var1->next;

			return (node_number);
		}

		var1 = var1->next;
		var2 = (var2->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - the entry point
 * @h: param -> pointer
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *var3;
	size_t nodes_sum, i;

	nodes_sum = looped_listint_count(*h);

	if (nodes_sum == 0)
	{
		for (; h != NULL && *h != NULL; nodes_sum++)
		{
			var3 = (*h)->next;
			free(*h);
			*h = var3;
		}
	}
	else
	{
		for (i = 0; i < nodes_sum; i++)
		{
			var3 = (*h)->next;
			free(*h);
			*h = var3;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes_sum);
}
