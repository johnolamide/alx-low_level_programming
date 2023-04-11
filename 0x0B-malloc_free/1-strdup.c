#include "main.h"
/**
 * _strdup - Duplicate a string.
 * @str: Pointer to the string to be duplicated.
 * Return: On success, a pointer to the duplicated string.
 * On failure, NULL.
 */
char *_strdup(char *str)
{
	size_t len = 0;
	if (str == NULL)
		return (NULL);

	char *p = str;

	while (*p++)
		len++;

	char *dup = (char *) malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	char *q = dup;

	while (*str)
		*q++ = *str++;

	*q = '\0';

	return (dup);
}
