#include "lists.h"

/**
 * add_nodeint - this function add a new node
 * @n: param int
 * @head: param pointer to the address
 * return: NULL if the function do no work
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));

    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return new_node;
}
