#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at the index
 * @head: pointer to the head of the list
 * @index: the index of the node to free
 * Return: 1 (Success), -1 (failed)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old;
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		printf("if condition 1\n");
		old = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		old = NULL;
		free(old);
		return (1);
	}
	while (*head != NULL && i < index - 1)
	{
		printf("while\n");
		i++;
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	if (i == index - 1)
	{
		printf("if condition 2\n");
		old = tmp->next;
		tmp->next = old->next;
		if (old->next != NULL)
			old->next->prev = tmp;
		free(old);
		return (1);
	}
	return (-1);
}
