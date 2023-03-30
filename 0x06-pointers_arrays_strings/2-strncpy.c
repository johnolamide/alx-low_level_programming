#include "main.h"
/**
 * _strncpy - copies string from src to destination
 * @dest: destination pointer
 * @src: source pointer
 * @n : control integer
 * Return: return destination pointer 
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\n';

	return (dest);
}
