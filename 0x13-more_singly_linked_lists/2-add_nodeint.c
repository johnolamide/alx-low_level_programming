#include "lists.h"
/**
 * add_nodeint - add new node to the beginning of a list_t list
 * @n: n property of list_t
 * Return: new node if SUCCESSFUL or NULL if not
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
