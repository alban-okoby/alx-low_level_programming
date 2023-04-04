#include "lists.h"

/**
 * reverse_listint - Entry point
 * @head: param -> address pointer
 * Return: the reserved pointed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *second;

	if (head == NULL || *head == NULL)
		return (NULL);

	second = NULL;

	do {
		first = (*head)->next;
		(*head)->next = second;
		second = *head;
		*head = first;
	} while ((*head) != NULL);

	(*head) = second;

	return (*head);
}
