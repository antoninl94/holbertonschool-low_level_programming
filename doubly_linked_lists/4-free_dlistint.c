#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *old;

	while (head != NULL)
	{
		old = head;
		head = head->next;
		free(old);
	}
}
