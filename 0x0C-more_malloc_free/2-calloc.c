#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array element
 * @size: size of bytes
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alm;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alm = malloc(nmemb * size);

	if (alm == NULL)
		return (NULL);
	for (i = 0, i < (nmemb * size); i++)
		alm[i] = 0;

	return (alm);
}
