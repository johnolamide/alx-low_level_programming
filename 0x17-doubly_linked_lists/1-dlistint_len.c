#include "lists.h"
/**
 * dlistint_len - number of elements in a dlistint_t list
 * @h: pointer to the head node
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
