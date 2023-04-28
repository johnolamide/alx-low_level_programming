#include "lists.h"
/**
 * list_len - counts the number of elements in a list_t list
 * @h: list_t list
 * Return: length of list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
