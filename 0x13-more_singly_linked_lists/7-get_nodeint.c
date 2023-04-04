#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t linked list
 * @head: param -> pointer to the list
 * @index: param -> index of the node to locate
 * Return: located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_number = 0;

	do {
		if (head == NULL)
			return (NULL);

		head = head->next;
		node_number++;
	} while (node_number <= index);

	return (head);
}
