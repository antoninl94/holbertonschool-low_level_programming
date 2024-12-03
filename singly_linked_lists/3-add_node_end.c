#include "lists.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * add_node_end - add new node at the end
 * @head: point to the beginning of the linked list
 * @str: the value of new->str
 * Return: the adress of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
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

	return (new);
}
