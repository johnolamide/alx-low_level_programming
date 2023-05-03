#include "lists.h"
/**
 * pop_listint - delete the head listint_t list
 * @head: head of the listint_t list
 * Return: returns the listint_t data n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
