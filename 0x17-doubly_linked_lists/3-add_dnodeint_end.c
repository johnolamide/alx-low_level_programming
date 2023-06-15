#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a dlistint_t list
 * @head: pointer to head node
 * @n: integer data of new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
