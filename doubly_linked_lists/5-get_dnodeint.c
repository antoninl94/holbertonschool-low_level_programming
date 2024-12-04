#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a list
 * @head: point to the head list
 * @index: the nth node
 * Return: the nth node, NULL if the node does'nt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	if (tmp == NULL)
		return (NULL);
	while (i < index)
	{
		if (tmp->next == NULL)
			return (NULL);
		i++;
		tmp = tmp->next;
	}
	return (tmp);
}
