#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data
 * @head: point on the beginning of the list
 * Return: the sum of the datas
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = tmp->n;

	if (tmp == NULL)
		return (0);

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		sum += tmp->n;
	}
	return (sum);
}
