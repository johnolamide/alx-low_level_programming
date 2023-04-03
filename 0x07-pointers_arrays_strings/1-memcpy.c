#include "main.h"
/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of memory space
 * Return: double pointer to dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char **pdest;

	*pdest = &dest;
	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		i++;
	}

	return (*pdest);
}
