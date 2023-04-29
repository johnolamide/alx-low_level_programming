#include "lists.h"
/**
 * add_nodeint_end - add new node to the end of listint_t
 * @head: pointer to listint_t list
 * @n: n property of listint_t
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	return (node);
}
