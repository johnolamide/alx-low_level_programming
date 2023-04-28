#include "lists.h"
/**
 * add_node_end - add node to the end of a list_t list
 * @head: double pointer to list_t
 * @str: string to add to the new node
 * Return: returns the node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;
	list_t *prev_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		while (*str++)
			len++;
		new_node->len = len;
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	prev_node = *head;
	while (prev_node->next != NULL)
		prev_node = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}
