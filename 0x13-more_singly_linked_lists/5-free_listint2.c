#include "lists.h"

/**
 * free_listint2 - the function entry point
 * description: This function set head to NULL
 * @head: param -> pointer to the free list address
 */

void free_listint(listint_t **head)
{
	listint_t *free;

	if (head == NULL)
	{
		return;
	}

	for (; head; head = free)
	{
		free = (*head)->next;
		/*free(head); */
		*head = free;
	}
	head = NULL;
}
