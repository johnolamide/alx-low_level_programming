#include "lists.h"
/**
 * add_dnodeint - add a node to the beginning of a dlistint_t list
 * @head: pointer to head node
 * @n: int data of new node
 * Return: pointer to head node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	(*head)->prev = temp;
	temp->next = *head;
	*head = temp;
	return (temp);
}
