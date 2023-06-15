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
	if (idx >= len)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	temp = *h;
	for (i = 0; i < idx; i++)
		temp = temp->next;
	prev = temp->prev;
	temp->prev = newNode;
	newNode->next = temp;
	prev->next = newNode;
	newNode->prev = prev;
	return (newNode);
}
