#include "lists.h"

/**
 * dlistint_len - print the number of elements of a list
 * @h: the list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
