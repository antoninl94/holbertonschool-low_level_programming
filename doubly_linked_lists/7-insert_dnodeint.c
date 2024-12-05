#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: point to the start of the list
 * @idx: the position of the new node
 * @n: the data to put in the new node
 * Return: the new node adress or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (tmp == NULL)
		return (NULL);
	if (idx == 0 || (*h) == NULL)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		if ((*h)->next == NULL)
			return (add_dnodeint_end(h, n));
		i++;
		tmp = tmp->next;
	}
	if (i == idx - 1)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = tmp;
		new->next = tmp->next;
		tmp->next = new;
		tmp->next->prev = new;
	}
	return (new);
}
