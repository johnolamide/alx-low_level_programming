#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *prev;

	if (head == NULL)
		return;
	while (temp->next != NULL)
		temp = temp->next;
	while (temp != NULL)
	{
		prev = temp->prev;
		free(temp);
		temp = prev;
	}
}
