#include "lists.c"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to the address of the head of the linked list
 * @idx: The position at which to insert the new node
 * @n: The integer value to be stored in the new node
 * Return: On success, returns a pointer to the newly inserted node.
 * On failure, returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *var1, *var2 = *head;
	unsigned int j;

	var1 = malloc(sizeof(listint_t));

	if (var1 == NULL)
		return (NULL);
	var1->n = n;
	if (idx == 0)
	{
		var1->next = var2;
		*head = var1;
		return (var1);
	}
	for (j = 0; j < (idx - 1); j++)
	{
		if (var2 == NULL || var2->next == NULL)
			return (NULL);
		var2 = var2->next;
	}
	var1->next = var2->next;
	var2->next = var1;
	return (var1);
}
