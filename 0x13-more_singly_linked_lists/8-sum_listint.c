#include "lists.h"

/**
 * sum_listint - the entry point
 * @head: param -> pointer
 * Return: All data sum
 */
int sum_listint(listint_t *head)
{
	int sum_list;
	sum_list = 0;
	
	for (; head; head = head->next)
	{
		sum_list += head->n;
	}

	return (sum_list);
}
