#include "main.h"
/**
 * _strcpy - copies the string pointed by one pointer to another
 * @dest: destination pointer
 * @src: source pointer
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
		*p++ = *src++;

	*p = '\0';

	return (dest);
}
