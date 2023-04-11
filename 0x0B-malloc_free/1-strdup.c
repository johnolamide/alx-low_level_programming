#include "main.h"
/**
 * _strdup - Duplicate a string.
 * @str: Pointer to the string to be duplicated.
 * Return: On success, a pointer to the duplicated string.
 * On failure, NULL.
 */
char *_strdup(char *str)
{
	size_t len;
	char *p;
	char *dup;
	char *q;

	if (str == NULL)
		return (NULL);

	len = 0;
	p = str;

	while (*p++)
		len++;

	dup = malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	q = dup;

	while (*str)
		*q++ = *str++;

	*q = '\0';

	return (dup);
}
