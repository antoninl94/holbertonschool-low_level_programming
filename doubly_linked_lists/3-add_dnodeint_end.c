#include "lists.h"

/**
 * add_dnodeint_ent - add a new node at the end of a list
 * @head: point on the beginning of a list
 * @n: the int in the node
 * Return: adress of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	new->prev = new->next;

	return (new);
}
