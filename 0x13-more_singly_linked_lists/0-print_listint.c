#include "lists.h"
/**
 * print_listint - prints all elements of a list_t list
 * @h: listint_t list pointer
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
