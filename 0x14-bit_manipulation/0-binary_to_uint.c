#include "main.h"
/**
 * binary_to_uint - converts a biinary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
