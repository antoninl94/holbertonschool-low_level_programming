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
 * add_node - add a new node at the beginning of
 * the singly linked list
 * @head: point to the head of the string
 * @str: the value of the string in node
 * Return: The adress of the new element or NULL if
 * it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
