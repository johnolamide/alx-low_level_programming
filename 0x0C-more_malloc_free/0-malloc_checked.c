#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 * Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b * sizeof(*mem));

	if (mem == NULL)
		return (98);
	return (mem);
}
