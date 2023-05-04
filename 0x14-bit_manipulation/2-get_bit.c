#include "main.h"
/**
 * get_bit - get the bit at a given index
 * @n: number
 * @index: index of bit to return
 * Return: returns the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	return ((n >> index) & 1);
}
