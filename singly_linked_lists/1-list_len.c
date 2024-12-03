#include "lists.h"

/**
 * list_len - return number of element in a list
 * @h: the list
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
