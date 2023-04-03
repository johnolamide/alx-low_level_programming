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

	i = 0;
	*pdest = &dest;
	while (i < n)
	{
		if (src[i] != '\0')
			*dest++ = *src++;
		i++;
	}

	return (*pdest);
}
