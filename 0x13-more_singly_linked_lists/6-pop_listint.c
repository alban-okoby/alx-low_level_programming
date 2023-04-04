#include "lists.h"

/**
 * pop_listint - The entry point
 * @head: point to the node head address
 * return: node elt
 */
int pop_listint(listint_t **head)
{
    int var2 = 0;
    listint_t *temp = NULL;

    if (head == NULL || *head == NULL)
        return var2;

    temp = *head;
    var2 = temp->n;
    *head = (*head)->next;
    free(temp);

    return var2;
}
