#include "lists.h"

/**
 * pop_listint - Supprime le premier élément d'une liste
 * et renvoie sa valeur.
 * @head: pointeur vers le pointeur de la tête de la liste.
 *
 * Return: la valeur de l'élément supprimé.
 *         0 si la liste est vide.
 */

int pop_listint(listint_t **head)
{
	int var2 = 0;
	listint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (var2);
	temp = *head;
	var2 = temp->n;
	*head = (*head)->next;
	free(temp);

	return (var2);
}
