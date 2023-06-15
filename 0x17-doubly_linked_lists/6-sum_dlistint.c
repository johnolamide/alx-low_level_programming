#include "lists.h"
/**
 * sum_dlistint - sum all the data(n) in a dlistint_t list
 * @head: pointer to the head node
 * Return: sum of data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
