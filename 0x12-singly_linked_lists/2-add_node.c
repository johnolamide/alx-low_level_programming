#include "lists.h"
/**
 * add_node - add a new node
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (str == NULL)
	{
		node->str = NULL;
		node->len = 0;
	}
	else
	{
		while (str[len])
			len++;
		node->str = strdup(str);
		node->len = len;
	}
	node->next = *head;
	*head = node;
	return (node);
}
