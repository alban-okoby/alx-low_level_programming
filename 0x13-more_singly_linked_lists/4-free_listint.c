#include "lists.h"

/**
 * free_listint - the function entry point
 * @head: param -> pointer to the free list
 */

void free_listint(listint_t *head)
{
	listint_t *free;

	for (; head; head = free)
	{
		free = head->next;
		/*free(head); */
		head = free;
	}
}
