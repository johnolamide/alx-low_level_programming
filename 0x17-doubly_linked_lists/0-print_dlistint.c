#include "lists.h"
/**
 * print_dlistint - print all the elements in a dlistint_t list
 * @h: pointer to the head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
