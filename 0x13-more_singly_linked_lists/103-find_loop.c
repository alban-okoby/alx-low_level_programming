#include "lists.h"

/**
 * find_listint_loop - the entry point
 * @head: param -> pointer
 * Return: address of the node where the loop starts or
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *var1, *var2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	for (var1 = head->next, var2 = (head->next)->next;
	     var2 && (var2->next);
	     var1 = var1->next, var2 = (var2->next)->next)
	{
		if (var1 == var2)
		{
			var1 = head;

			while (var1 != var2)
			{
				var1 = var1->next;
				var2 = var2->next;
			}

			return (var1);
		}
	}

	return (NULL);
}
