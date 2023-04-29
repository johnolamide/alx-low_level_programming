#include "lists.h"
/**
 * free_listint - free a listint_t list
 *  @head: head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
