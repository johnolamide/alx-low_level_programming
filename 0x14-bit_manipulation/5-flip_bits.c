#include "main.h"
/**
 * flip_bits - number of bit need to flip to get from one number to another
 * @n: number
 * @m: other number
 * Return: returns count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
