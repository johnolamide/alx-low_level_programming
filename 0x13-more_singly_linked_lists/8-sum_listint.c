#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: The head of the list
 * Return: The sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
