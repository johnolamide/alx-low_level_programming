#include "lists.h"
/**
 * listint_len - gives the length of a list_t lis
 * @h: list_t list pointer
 * Return: length of list_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
