#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *n;
	size_t nc;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	for (n = 0; str[nc]; nc++)
		;
	n->len = nc;
	n->next = *head;
	*head = n;
	return (*head);
}
