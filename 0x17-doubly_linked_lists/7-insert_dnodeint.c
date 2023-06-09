#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at specific index
 * @h: pointer to head node
 * @idx: index
 * @n: int data
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp, *prev;
	unsigned int len = 0, i;

	if (*h == NULL)
		return (NULL);
	temp = *h;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (idx > len)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	if (idx == len)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	temp = *h;
	for (i = 0; i < idx; i++)
		temp = temp->next;
	newNode->n = n;
	prev = temp->prev;
	temp->prev = newNode;
	newNode->next = temp;
	prev->next = newNode;
	newNode->prev = prev;
	return (newNode);
}
