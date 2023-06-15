#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to head pointer
 * @index: index of node to delete
 * Return: 1 for SUCCESS, -1 for FAILURE
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			else
				*head = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
		free(temp);
		return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
