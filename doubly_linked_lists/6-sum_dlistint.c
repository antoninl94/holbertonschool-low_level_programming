#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data
 * @head: point on the beginning of the list
 * Return: the sum of the datas
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (tmp == NULL)
		return (sum);

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
