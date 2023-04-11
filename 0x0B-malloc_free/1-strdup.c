#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *array;
	int i;
	int len;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	array = malloc(len + 1);

	for (i = 0; i < len; i++)
		array[i] = str[i];
	array[len] = '\0';

	if (array == NULL)
		return (NULL);
	return (array);
}
