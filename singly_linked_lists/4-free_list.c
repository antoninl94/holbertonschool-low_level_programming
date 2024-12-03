#include "lists.h"

/**
 * free_list - free the list_t list
 * @head: point to the list to free
 */
void free_list(list_t *head)
{
	list_t *old;

	while (head != NULL)
	{
		old = head;
		head = head->next;
		free(old->str);
		free(old);
	}
}
