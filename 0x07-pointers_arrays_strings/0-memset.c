#include "main.h"
/**
 * _memset - fills a memoryvwith a constant byte
 * @s: pointer to be filled
 * @b: byte to fill
 * @n: number of bytes to fill
 * Return: pointer to pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **ps;

	ps = &s;
	while (n > 0)
	{
		*s++ = b;
		n++;
	}
	
	return (*ps);
}
