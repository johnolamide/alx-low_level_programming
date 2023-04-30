#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: listont_int list
 * @index: index
 * Return: listint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
