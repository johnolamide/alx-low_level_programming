#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 * Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b * sizeof(*mem));

	return (mem);
}
