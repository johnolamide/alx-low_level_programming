#include "main.h"
/**
 * _strncat - concatenate two string depending on n
 * @dest: destination pointer
 * @src: source pointer
 * @n: control number
 * Return: destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
