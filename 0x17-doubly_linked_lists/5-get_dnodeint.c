#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node of a dlistint_t list
 * @head: pointer to the head node
 * @index: index of the node
 * Return: address of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int len = 0;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (index >= len)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;
	return (temp);

}
